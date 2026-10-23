/* nnMain
 * address: 0x60562698   size: 880   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall nnMain(nn__os *a1)
{
  nn__os *HostArgc; // r0
  _DWORD *v2; // r4
  _DWORD *v3; // r2
  void *v4; // r6
  _DWORD *v5; // r5
  nn__oe *v6; // r0
  int v7; // r6
  int v8; // r4
  int a2[2]; // [sp+Ch] [bp-194h] BYREF
  _DWORD v10[2]; // [sp+14h] [bp-18Ch] BYREF
  sead__SafeString v11; // [sp+1Ch] [bp-184h]
  int v12; // [sp+24h] [bp-17Ch]
  int v13; // [sp+28h] [bp-178h]
  int v14; // [sp+2Ch] [bp-174h]
  int v15; // [sp+30h] [bp-170h]
  int v16; // [sp+34h] [bp-16Ch]
  char v17; // [sp+38h] [bp-168h]
  char v18; // [sp+39h] [bp-167h]
  char v19; // [sp+3Ah] [bp-166h]
  char v20; // [sp+3Bh] [bp-165h]
  int v21; // [sp+3Ch] [bp-164h]
  int v22; // [sp+40h] [bp-160h]
  int v23; // [sp+44h] [bp-15Ch]
  int v24; // [sp+48h] [bp-158h]
  int v25; // [sp+4Ch] [bp-154h]
  int v26; // [sp+50h] [bp-150h]
  int v27; // [sp+54h] [bp-14Ch]
  int v28; // [sp+58h] [bp-148h]
  int v29; // [sp+5Ch] [bp-144h]
  int v30; // [sp+60h] [bp-140h]
  int v31; // [sp+64h] [bp-13Ch]
  _DWORD v32[2]; // [sp+68h] [bp-138h] BYREF
  sead__SafeString result; // [sp+70h] [bp-130h] BYREF
  int v34; // [sp+78h] [bp-128h]
  _DWORD v35[73]; // [sp+7Ch] [bp-124h] BYREF

  HostArgc = (nn__os *)nn__os__GetHostArgc(a1);
  nn__os__GetHostArgv(HostArgc);
  nn__os__QueryMemoryInfo((int)&result);
  result.cstr = (char *)v35;
  result.vtable = &BufferedSafeStringBase_char_vtable_probably;
  v34 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&result);
  *result.cstr = 0;
  result.vtable = &off_60BD94BC;
  nnMain_helper_8FD644();
  result.vtable = &BufferedSafeStringBase_char_vtable_probably;
  result.cstr = (char *)v35;
  v34 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&result);
  *result.cstr = 0;
  result.vtable = &off_60BD94BC;
  nnMain_helper_8FD644();
  result.vtable = &BufferedSafeStringBase_char_vtable_probably;
  result.cstr = (char *)v35;
  v34 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&result);
  *result.cstr = 0;
  result.vtable = &off_60BD94BC;
  nnMain_helper_8FD644();
  nnMain_helper_8ED664(v32);
  nn__os__QueryMemoryInfo((int)&result);
  v32[0] = v35[0] - v35[1];
  sead__GameFrameworkNx__initialize(v32);
  v2 = 0;
  v11.vtable = (void *)1;
  v14 = 1065353216;
  v11.cstr = (char *)1056964608;
  v12 = 1056964608;
  v13 = 1056964608;
  v20 = 0;
  result.vtable = &sead__SafeStringBase__vtable;
  v3 = 0;
  v23 = 4096;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v29 = 0;
  v30 = 8492;
  v31 = 2;
  v17 = 0;
  v10[0] = 1156579328;
  v10[1] = 1149698048;
  v15 = 1920;
  v16 = 1080;
  v18 = 1;
  v19 = 0;
  v24 = 0x1000000;
  v25 = 0;
  v21 = 0x100000;
  v22 = 0x100000;
  result.cstr = "Framework";
  if ( dword_60CCEEA4 )
    v3 = *(_DWORD **)dword_60CCEEAC;
  v4 = (void *)sead__ExpHeap__create(0, (int)&result, v3, 4, 1, 0);
  v5 = (_DWORD *)operator_new_8DE25C(0x170u, v4, 4);
  nnMain_helper(v5);
  v6 = (nn__oe *)(*(int (__fastcall **)(void *))(*(_DWORD *)v4 + 20))(v4);
  nn__oe__Initialize(v6);
  nn__oe__SetPerformanceConfiguration(1, 0x10001);
  nn__oe__SetPerformanceConfiguration(0, 0x20003);
  nn__oe__SetFocusHandlingMode(2);
  result.vtable = &sead__SafeStringBase__vtable;
  result.cstr = "FwGraphicSystem";
  if ( dword_60CCEEA4 )
    v2 = *(_DWORD **)dword_60CCEEAC;
  v7 = 0;
  v8 = sead__ExpHeap__create(0, (int)&result, v2, 4, 1, 0);
  nnMain_helper_8EA13C((int)v5, v8, v10);
  (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8);
  a2[0] = 2;
  a2[1] = (int)CreateRootTask;
  sub_608EF048(&result, a2);
  nnMain_helper_8ED674(a2);
  if ( dword_60CCEEA4 )
    v7 = *(_DWORD *)dword_60CCEEAC;
  (*(void (__fastcall **)(_DWORD *, int, sead__SafeString *, int *))(*v5 + 20))(v5, v7, &result, a2);
}
