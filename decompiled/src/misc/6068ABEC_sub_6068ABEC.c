/* sub_6068ABEC
 * address: 0x6068ABEC   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6068ABEC(int a1, int a2, int a3, int a4)
{
  int v7; // r6
  int v8; // r7
  char v9; // r4
  int v10; // r7
  int v11; // s0
  sead__SafeString v13; // [sp+4h] [bp-2Ch] BYREF
  sead__SafeString v14; // [sp+Ch] [bp-24h] BYREF
  int v15; // [sp+14h] [bp-1Ch] BYREF

  v7 = a1 + 24;
  v15 = 0;
  v14.vtable = &sead__SafeStringBase__vtable;
  v13.vtable = &sead__SafeStringBase__vtable;
  v14.cstr = "Mask";
  v13.cstr = LightMask_names[a4];
  output_bfres_ref_448C14(&v14, &v13, a1 + 24, &v15, 0);
  if ( a3 == 1 )
  {
    v10 = operator_new(0x44u);
    sub_60448BFC((_DWORD *)(v10 + 4));
    v11 = 0;
    v9 = 1;
    *(_DWORD *)v10 = off_60C174A8;
    FIELD_U32(a1, 16) = v10;
    goto LABEL_5;
  }
  if ( !a3 )
  {
    v8 = operator_new(0x44u);
    sub_60448BFC((_DWORD *)(v8 + 4));
    v9 = 0;
    *(_DWORD *)v8 = off_60C17470;
    FIELD_U32(a1, 16) = v8;
    FIELD_U32(v8, 52) = v7;
    FIELD_U32(v8, 56) = a2;
    FIELD_U32(v8, 60) = 0;
    FIELD_U8(v8, 64) = 0;
    v10 = operator_new(0x44u);
    sub_60448BFC((_DWORD *)(v10 + 4));
    v11 = -1027080192;
    *(_DWORD *)v10 = off_60C1748C;
    FIELD_U32(a1, 20) = v10;
LABEL_5:
    FIELD_U32(v10, 56) = a2;
    FIELD_U32(v10, 52) = v7;
    FIELD_U32(v10, 60) = v11;
    FIELD_U8(v10, 64) = v9;
  }
  return 1;
}
