/* sub_603EDE04
 * address: 0x603EDE04   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_603EDE04(int a1)
{
  int v2; // r6
  int v3; // r7
  int v4; // r8
  int v5; // r5
  int i; // r0
  int v7; // r0
  _BYTE *result; // r0
  bool v9; // zf
  int v10; // r5
  int v11; // r4
  _BYTE *v12; // r6

  if ( FIELD_U8(a1, 56) )
  {
    FIELD_U8(a1, 56) = 0;
    v2 = FIELD_U32(a1, 44);
    if ( v2 != a1 + 40 )
    {
      v3 = FIELD_U32(a1, 52);
      v4 = a1 + 40 - v3;
      v5 = v2 - v3;
      do
      {
        v2 = FIELD_U32(v2, 4);
        if ( FIELD_U8(v5, 16) )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
          sead__ListNode__erase(FIELD_U32(a1, 52) + v5);
          --FIELD_U32(a1, 48);
          (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v5 + 12) + 16))(FIELD_U32(v5, 12));
        }
        v5 = v2 - v3;
      }
      while ( v2 - v3 != v4 );
    }
  }
  for ( i = sub_608DE5C8(a1 + 24); i; i = sub_608DE5C8(a1 + 24) )
  {
    v7 = i - FIELD_U32(a1, 36);
    if ( !v7 )
      break;
    sead__ListNode__insertFront((sead_ListNode *)(a1 + 40), (sead_ListNode *)(FIELD_U32(a1, 52) + v7));
    ++FIELD_U32(a1, 48);
  }
  result = (_BYTE *)dword_60C995D0;
  v9 = dword_60C995D0 == 0;
  if ( dword_60C995D0 )
  {
    result = *(_BYTE **)(dword_60C995D0 + 32);
    v9 = result == 0;
  }
  if ( v9 )
  {
    v10 = FIELD_U32(a1, 44);
    result = (_BYTE *)(a1 + 40);
    if ( v10 != a1 + 40 )
    {
      v11 = FIELD_U32(a1, 52);
      v12 = &result[-v11];
      result = (_BYTE *)(v10 - v11);
      do
      {
        if ( !result[16] )
          (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)result + 4))(result);
        v10 = FIELD_U32(v10, 4);
        result = (_BYTE *)(v10 - v11);
      }
      while ( (_BYTE *)(v10 - v11) != v12 );
    }
  }
  return result;
}
