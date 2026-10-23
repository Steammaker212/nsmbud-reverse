/* sub_60508C34
 * address: 0x60508C34   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60508C34(int a1)
{
  int v2; // r3
  int v3; // r1
  _BYTE *v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r3
  int result; // r0

  StateMgr__execute((StateMgr *)(a1 + 20));
  if ( FIELD_U8(a1, 3750) && !FIELD_U8(a1, 3748) )
  {
    v2 = 7;
    FIELD_U8(a1, 3750) = 0;
    FIELD_U16(a1, 3748) = 257;
    v3 = FIELD_U32(a1, 3732);
    if ( v3 == 1 )
      v2 = 3;
    if ( !v3 )
      v2 = 5;
    FIELD_U32(a1, 3740) = v2;
    sub_6047467C((_DWORD *)(a1 + 40), 0, &dword_60CA7C40[2 * v2], (int)&dword_60CA7CB0[2 * v2], 1.0, 0);
  }
  if ( FIELD_U8(a1, 3748) && (*(_BYTE *)(sub_6047482C(a1 + 40, 0) + 51) & 1) != 0 )
    FIELD_U16(a1, 3748) = 0;
  sub_60508E90(a1);
  if ( FIELD_U8(a1, 3751) )
  {
    v4 = (_BYTE *)sub_6047482C(a1 + 40, 3u);
    if ( (v4[51] & 1) != 0 )
    {
      (*(void (__fastcall **)(_BYTE *, float))(*(_DWORD *)v4 + 96))(v4, 0.0);
      v5 = FIELD_U32(a1, 3728);
      if ( FIELD_U32(a1, 3740) == 1 )
      {
        v6 = v5 + 1;
        FIELD_U32(a1, 3728) = v6;
        if ( v6 >= FIELD_U32(a1, 3744) )
          v6 = 0;
      }
      else
      {
        FIELD_U32(a1, 3728) = v5 - 1;
        if ( v5 > 0 )
        {
LABEL_20:
          LabelFree_CourseNum_00_ref(a1);
          FIELD_U8(a1, 3751) = 0;
          FIELD_U8(a1, 3749) = 0;
          goto LABEL_21;
        }
        v6 = FIELD_U32(a1, 3744) - 1;
      }
      FIELD_U32(a1, 3728) = v6;
      goto LABEL_20;
    }
  }
LABEL_21:
  if ( FIELD_U8(a1, 3753) )
  {
    if ( !FIELD_U8(a1, 3752) )
    {
      FIELD_U8(a1, 3753) = 0;
      v7 = FIELD_U32(a1, 3732);
      if ( v7 != 1 )
      {
        v8 = 8;
        if ( !v7 )
          v8 = 6;
        FIELD_U8(a1, 3749) = 1;
        FIELD_U8(a1, 3752) = 1;
        FIELD_U32(a1, 3740) = v8;
        sub_6047467C((_DWORD *)(a1 + 40), 0, &dword_60CA7C40[2 * v8], (int)&dword_60CA7CB0[2 * v8], 1.0, 0);
      }
    }
  }
  if ( FIELD_U8(a1, 3752) && (*(_BYTE *)(sub_6047482C(a1 + 40, 0) + 51) & 1) != 0 )
  {
    FIELD_U8(a1, 3752) = 0;
    FIELD_U8(a1, 3749) = 0;
  }
  result = FIELD_U8(a1, 3754);
  if ( FIELD_U8(a1, 3754) )
  {
    result = *(unsigned __int8 *)(sub_6047482C(a1 + 40, 1u) + 51);
    if ( (result & 1) != 0 )
    {
      FIELD_U8(a1, 3754) = 0;
      return sub_60473DE4((_DWORD *)(a1 + 40), 5u, &dword_60CA7CA8, 1);
    }
  }
  return result;
}
