/* sub_6042BB44
 * address: 0x6042BB44   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042BB44(int a1, char *a2, unsigned int a3)
{
  int result; // r0
  int v7; // r4
  int v8; // r7
  int v9; // r7
  sead_ListNode *v10; // r4

  result = 5992;
  FIELD_U8(a1, 5992) = 0;
  v7 = FIELD_U32(a1, 20);
  if ( v7 != a1 + 16 )
  {
    do
    {
      v8 = FIELD_U32(v7, 4);
      sead__ListNode__erase(v7);
      --FIELD_U32(a1, 24);
      *(_DWORD *)(v7 - 88) = FIELD_U32(a1, 28);
      result = v7 - 88;
      v7 = v8;
      FIELD_U32(a1, 28) = result;
    }
    while ( v8 != a1 + 16 );
  }
  if ( a3 )
  {
    v9 = 0;
    do
    {
      v10 = 0;
      if ( FIELD_U32(a1, 24) < FIELD_U32(a1, 36) )
      {
        v10 = *(sead_ListNode **)(a1 + 28);
        if ( v10 )
          FIELD_U32(a1, 28) = FIELD_U32(v10, 0x0);
        else
          v10 = 0;
        memset(v10, 0, 96);
        sead__ListNode__insertFront((sead_ListNode *)(a1 + 16), v10 + 11);
        ++FIELD_U32(a1, 24);
      }
      qmemcpy(v10, a2, 0x58u);
      ++v9;
      a2 += 88;
      result = (unsigned __int8)v9;
    }
    while ( (unsigned __int8)v9 < a3 );
  }
  return result;
}
