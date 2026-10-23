/* sub_6042EE58
 * address: 0x6042EE58   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042EE58(int a1)
{
  int result; // r0
  int v3; // r11
  int v4; // r5
  int v5; // r10
  char *v6; // r6
  int v7; // r8

  nn__mii__Database__Get(a1 + 5488, a1 + 48, FIELD_U32(a1, 44), 6, 2);
  result = FIELD_U32(a1, 48);
  v3 = FIELD_U32(a1, 80) - FIELD_U32(a1, 68);
  if ( result < v3 )
    v3 = FIELD_U32(a1, 48);
  if ( v3 >= 1 )
  {
    v4 = 0;
    v5 = 0;
    result = FIELD_U32(a1, 52);
    do
    {
      v6 = *(char **)(a1 + 44);
      if ( FIELD_U32(a1, 40) > (unsigned int)v5 )
        v6 += v4;
      if ( (unsigned int)result <= 0x35 )
      {
        v7 = FIELD_U32(a1, 72);
        if ( v7 )
          FIELD_U32(a1, 72) = *(_DWORD *)v7;
        else
          v7 = 0;
        memset((void *)(v7 + 4), 0, 88);
        *(_DWORD *)v7 = 100663296;
        FIELD_U32(v7, 92) = 0;
        FIELD_U32(v7, 96) = 0;
        sead__ListNode__insertFront((sead_ListNode *)(a1 + 60), (sead_ListNode *)(v7 + 92));
        ++FIELD_U32(a1, 68);
        *(_DWORD *)v7 = v5 & 0xFFFFFF;
        sub_6042B944((void *)(v7 + 4), v6);
        result = FIELD_U32(a1, 52) + 1;
        FIELD_U32(a1, 52) = result;
      }
      ++v5;
      v4 += 92;
    }
    while ( v5 < v3 );
  }
  return result;
}
