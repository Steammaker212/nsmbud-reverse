/* sub_608EADE8
 * address: 0x608EADE8   size: 808   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EADE8(int a1)
{
  int result; // r0
  void (__fastcall *v3)(int); // r1
  int v4; // r5
  __int64 v5; // r0
  char v6; // r12
  int v7; // r0
  int (__fastcall ***v8)(_DWORD, int *); // r5
  int v9; // r0
  int v10; // r0
  int v11; // r5
  __int64 v12; // r0
  int (__fastcall *v13)(_DWORD); // r1
  _BYTE v14[264]; // [sp+0h] [bp-108h] BYREF

  result = FIELD_U8(a1, 346) & 3;
  if ( result != 1 )
  {
    FIELD_U8(a1, 345) = 0;
    v3 = *(void (__fastcall **)(int))(a1 + 76);
    if ( v3 )
      v3(1);
    sub_608F4A80(v14);
    *(_DWORD *)&v14[192] = FIELD_U32(a1, 236);
    dword_60CC77C8();
    dword_60CC77CC(FIELD_U32(a1, 236), FIELD_U32(a1, 232), FIELD_U32(a1, 116));
    dword_60CC77E8(FIELD_U32(a1, 236));
    FIELD_U8(dword_60CCF464, 364) = 1;
    v4 = FIELD_U32(a1, 236);
    v5 = dword_60CC746C(FIELD_U32(a1, 240));
    dword_60CC7940(v4, 16, v5, HIDWORD(v5));
    dword_60CC7980(FIELD_U32(a1, 236), dword_60CCF464 + 80);
    dword_60CC797C(FIELD_U32(a1, 236), dword_60CCF464 + 48);
    dword_60CC7984(FIELD_U32(a1, 236), FIELD_U32(a1, 248), 0, FIELD_U32(a1, 252));
    v7 = FIELD_U32(a1, 176);
    if ( v7 )
    {
      sub_6090B260(v7, v14);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 136))(a1, 3);
    }
    v8 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 32);
    if ( ((unsigned int)&dword_60CCEBE0 & ~(1619963744 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEBE0) )
    {
      dword_60CCEBDC = (int)&off_60C5C3A8;
      _cxa_guard_release(&dword_60CCEBE0);
    }
    if ( v8 )
    {
      v9 = (**v8)(v8, &dword_60CCEBDC);
      if ( v9 )
        v9 = (int)v8;
    }
    else
    {
      v9 = 0;
    }
    sub_608EEE2C(v9);
    v10 = FIELD_U32(a1, 272);
    if ( v10 || (v10 = FIELD_U32(a1, 176)) != 0 )
      (*(void (__fastcall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v10 + 16))(v10, v14, FIELD_U32(a1, 216));
    v11 = FIELD_U32(a1, 236);
    v12 = dword_60CC746C(FIELD_U32(a1, 240));
    dword_60CC7940(v11, 0, v12 + 16, (unsigned __int64)(v12 + 16) >> 32);
    FIELD_U8(dword_60CCF464, 364) = 0;
    FIELD_U64(a1, 304) = dword_60CC77EC(FIELD_U32(a1, 236));
    if ( !FIELD_U8(a1, 344) )
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 128))(a1);
    sub_608F4AD4(v14);
    if ( FIELD_U8(a1, 344) )
      (*(void (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 284) + 12))(FIELD_U32(a1, 284), 1, 0);
    if ( dword_60CCEC3C )
      sub_608F3E88();
    if ( dword_60CCEC10 )
      sub_608F14B8();
    result = dword_60CCEC0C;
    if ( dword_60CCEC0C )
      result = sub_608F1478();
    v13 = *(int (__fastcall **)(_DWORD))(a1 + 76);
    if ( v13 )
      return v13(0);
  }
  return result;
}
