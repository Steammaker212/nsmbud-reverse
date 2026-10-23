/* sub_60548530
 * address: 0x60548530   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60548530(int a1)
{
  unsigned int v2; // r6
  int v3; // r5
  unsigned int v4; // r4
  int v5; // r0
  _DWORD *v6; // r0
  int v7; // r4
  unsigned int v8; // r0
  void (__fastcall *v9)(unsigned int, _DWORD *, int *); // r3
  unsigned int v10; // r7
  int v11; // r0
  int (__fastcall *v12)(unsigned int, _DWORD *, int *); // r3
  int v14; // [sp+4h] [bp-3Ch] BYREF
  int (**v15)(); // [sp+8h] [bp-38h] BYREF
  int v16; // [sp+Ch] [bp-34h]
  unsigned int v17; // [sp+10h] [bp-30h]
  _DWORD v18[11]; // [sp+14h] [bp-2Ch] BYREF

  v2 = 0;
  v17 = 0;
  v18[0] = &sead__SafeStringBase__vtable;
  v18[1] = &byte_60B3BA34;
  v15 = &sead__SafeStringBase__vtable;
  v16 = sub_6054963C(0);
  ((void (__fastcall *)(_DWORD *, int (***)()))off_60BC0240[0])(v18, &v15);
  v17 = 0;
  v3 = a1 + 9352;
  sub_604734E4((_DWORD *)(a1 + 9352), 0);
  v4 = v17;
  v5 = Pa_ArrowBtnR_00_Pa_ArrowBtnL_00_ref(v17);
  v15 = &sead__SafeStringBase__vtable;
  v16 = v5;
  if ( v4 >= 2 )
    v4 = 0;
  v6 = (_DWORD *)(v3 + 3540 * v4);
  v7 = a1 + 40;
  sub_60476388(v6, a1 + 40, &v15);
  v8 = v17;
  if ( v17 >= 2 )
    v8 = 0;
  v9 = *(void (__fastcall **)(unsigned int, _DWORD *, int *))(*(_DWORD *)(v3 + 3540 * v8) + 8);
  v14 = 1;
  v9(v3 + 3540 * v8, v18, &v14);
  v17 = 1;
  sub_604734E4((_DWORD *)(a1 + 12892), 0);
  v10 = v17;
  v11 = Pa_ArrowBtnR_00_Pa_ArrowBtnL_00_ref(v17);
  v15 = &sead__SafeStringBase__vtable;
  v16 = v11;
  if ( v10 >= 2 )
    v10 = 0;
  sub_60476388((_DWORD *)(v3 + 3540 * v10), v7, &v15);
  if ( v17 < 2 )
    v2 = v17;
  v12 = *(int (__fastcall **)(unsigned int, _DWORD *, int *))(*(_DWORD *)(v3 + 3540 * v2) + 8);
  v14 = 1;
  return v12(v3 + 3540 * v2, v18, &v14);
}
