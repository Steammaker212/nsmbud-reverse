/* sub_60694D6C
 * address: 0x60694D6C   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60694D6C(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, __int64 *); // r2
  int v4; // r0
  __int64 v5; // d17
  __int64 v6; // d17
  __int64 v7; // d17
  int v8; // r0
  int (__fastcall *v9)(int, __int64 *); // r2
  int v10; // r0
  __int64 v11; // d17
  __int64 v12; // d17
  __int64 v13; // d17
  int v14; // r0
  int (__fastcall *v15)(int, __int64 *); // r2
  int v16; // r0
  __int64 v17; // d17
  __int64 v18; // d17
  __int64 v19; // d17
  int v20; // r0
  int (__fastcall *v21)(int, __int64 *); // r2
  int v22; // r0
  __int64 v23; // d17
  __int64 v24; // d17
  __int64 v25; // d17
  int v26; // r0
  int (__fastcall *v27)(int, __int64 *); // r2
  int v28; // r0
  __int64 v29; // d17
  __int64 v30; // d17
  __int64 v31; // d17
  __int64 v33; // [sp+0h] [bp-40h] BYREF
  __int64 v34; // [sp+8h] [bp-38h]
  __int64 v35; // [sp+10h] [bp-30h]
  __int64 v36; // [sp+18h] [bp-28h]
  __int64 v37; // [sp+20h] [bp-20h]
  __int64 v38; // [sp+28h] [bp-18h]

  v2 = **(_DWORD **)(a1 + 912);
  v3 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v2 + 84);
  LODWORD(v33) = &sead__SafeStringBase__vtable;
  HIDWORD(v33) = "bend1";
  v4 = v3(v2, &v33);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(***(_DWORD ***)(a1 + 912) + 108))(**(_DWORD **)(a1 + 912), v4, &v33);
  v5 = v34;
  FIELD_U64(a1, 664) = v33;
  FIELD_U64(a1, 672) = v5;
  v6 = v36;
  FIELD_U64(a1, 680) = v35;
  FIELD_U64(a1, 688) = v6;
  v7 = v38;
  FIELD_U64(a1, 696) = v37;
  FIELD_U64(a1, 704) = v7;
  v8 = **(_DWORD **)(a1 + 912);
  v9 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v8 + 84);
  LODWORD(v33) = &sead__SafeStringBase__vtable;
  HIDWORD(v33) = "bend2";
  v10 = v9(v8, &v33);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(***(_DWORD ***)(a1 + 912) + 108))(**(_DWORD **)(a1 + 912), v10, &v33);
  v11 = v34;
  FIELD_U64(a1, 712) = v33;
  FIELD_U64(a1, 720) = v11;
  v12 = v36;
  FIELD_U64(a1, 728) = v35;
  FIELD_U64(a1, 736) = v12;
  v13 = v38;
  FIELD_U64(a1, 744) = v37;
  FIELD_U64(a1, 752) = v13;
  v14 = **(_DWORD **)(a1 + 912);
  v15 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v14 + 84);
  LODWORD(v33) = &sead__SafeStringBase__vtable;
  HIDWORD(v33) = "bend3";
  v16 = v15(v14, &v33);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(***(_DWORD ***)(a1 + 912) + 108))(**(_DWORD **)(a1 + 912), v16, &v33);
  v17 = v34;
  FIELD_U64(a1, 760) = v33;
  FIELD_U64(a1, 768) = v17;
  v18 = v36;
  FIELD_U64(a1, 776) = v35;
  FIELD_U64(a1, 784) = v18;
  v19 = v38;
  FIELD_U64(a1, 792) = v37;
  FIELD_U64(a1, 800) = v19;
  v20 = **(_DWORD **)(a1 + 912);
  v21 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v20 + 84);
  LODWORD(v33) = &sead__SafeStringBase__vtable;
  HIDWORD(v33) = "bend4";
  v22 = v21(v20, &v33);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(***(_DWORD ***)(a1 + 912) + 108))(**(_DWORD **)(a1 + 912), v22, &v33);
  v23 = v34;
  FIELD_U64(a1, 808) = v33;
  FIELD_U64(a1, 816) = v23;
  v24 = v36;
  FIELD_U64(a1, 824) = v35;
  FIELD_U64(a1, 832) = v24;
  v25 = v38;
  FIELD_U64(a1, 840) = v37;
  FIELD_U64(a1, 848) = v25;
  v26 = **(_DWORD **)(a1 + 912);
  v27 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v26 + 84);
  LODWORD(v33) = &sead__SafeStringBase__vtable;
  HIDWORD(v33) = "scl4";
  v28 = v27(v26, &v33);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(***(_DWORD ***)(a1 + 912) + 108))(**(_DWORD **)(a1 + 912), v28, &v33);
  v29 = v34;
  FIELD_U64(a1, 856) = v33;
  FIELD_U64(a1, 864) = v29;
  v30 = v36;
  FIELD_U64(a1, 872) = v35;
  FIELD_U64(a1, 880) = v30;
  v31 = v38;
  FIELD_U64(a1, 888) = v37;
  FIELD_U64(a1, 896) = v31;
  return a1 + 888;
}
