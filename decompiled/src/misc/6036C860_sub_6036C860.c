/* sub_6036C860
 * address: 0x6036C860   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6036C860(int a1, int a2, int a3)
{
  char v3; // r12
  int v4; // r5
  unsigned int result; // r0
  Actor *v8; // r6
  bool v9; // zf
  int v10; // r0
  bool v11; // zf
  bool v12; // zf
  _BYTE *v13; // r5
  char v14; // t1

  v4 = FIELD_U32(a1, 144);
  result = FIELD_U8(v4, 7309);
  if ( FIELD_U8(v4, 7309) )
    return result;
  result = FIELD_U8(v4, 7310);
  if ( FIELD_U8(v4, 7310) )
    return result;
  v8 = *(Actor **)(a2 + 2196);
  v9 = (FIELD_U8(a2, 2529) & 2) == 0;
  if ( (FIELD_U8(a2, 2529) & 2) != 0 )
    v9 = (FIELD_U8(a2, 2537) & 2) == 0;
  if ( !v9 )
    goto LABEL_33;
  v10 = FIELD_U32(a2, 2532);
  v11 = (v10 & 0x10000) == 0;
  if ( (v10 & 0x10000) != 0 )
    v11 = (FIELD_U8(a2, 2542) & 1) == 0;
  if ( !v11 )
    goto LABEL_33;
  v12 = (FIELD_U32(a2, 2532) & 0x8000) == 0;
  if ( (v10 & 0x8000) != 0 )
    v12 = (FIELD_U8(a2, 2541) & 0x80) == 0;
  if ( !v12 )
  {
LABEL_33:
    SE_OBJ_PNGN_ICE_BREAK_ref_36CFB4(v4, v8);
    result = FIELD_U32(a2, 2224) | 0x1000000;
    FIELD_U32(a2, 2224) = result;
    return result;
  }
  if ( FIELD_U32(v4, 80) != a3 && (unsigned __int8)(BYTE1(v8[6].field_34) - 1) <= 1u )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1614203136 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v8, 0x0))(v8, &dword_60C7B378) == 1 )
    {
      if ( a3 == 1 )
      {
        if ( ((int)FIELD_U32(v8 + (86) * 80, 0x20) & 0x2000040) != 0 )
          goto LABEL_33;
      }
      else if ( !a3 && ((int)FIELD_U32(v8 + (86) * 80, 0x20) & 0x1000020) != 0 )
      {
        goto LABEL_33;
      }
    }
  }
  if ( BYTE1(v8[6].field_34) == 1 )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1614203324 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v8, 0x0))(v8, &dword_60C7B378) == 1
      && (*(int (__fastcall **)(Actor *))(FIELD_U32(v8, 0x0) + 1204))(v8) == 1 )
    {
      goto LABEL_33;
    }
  }
  result = Actor__getProfileId(v8);
  if ( result == 476 )
  {
    v14 = FIELD_U8(v4, 7308);
    v13 = (_BYTE *)(v4 + 7308);
    result = (unsigned __int8)(v14 - 1);
    if ( result <= 1 )
    {
      *v13 = 3;
      return 3;
    }
  }
  return result;
}
