/* sub_608248F0
 * address: 0x608248F0   size: 2616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608248F0(int r0_0, void *a2)
{
  int v2; // r5
  int v4; // r7
  int (__fastcall ***v5)(_DWORD, int *); // r6
  char v6; // r12
  sead_IDisposer *v7; // r0
  void *v8; // r11
  int (***v9)(); // r9
  int (***v10)(); // r11
  int (__fastcall ***v11)(_DWORD, int *); // r4
  char v12; // r12
  int v13; // r6
  int v14; // r0
  int v15; // r9
  bool v16; // cc
  int (***v17)(); // r6
  int (**v18)(); // r0
  char *v19; // r11
  char *v20; // r5
  signed int v21; // r4
  int v22; // r4
  int v23; // r5
  signed int v24; // r9
  int v25; // r4
  void (__fastcall *v26)(int, int); // r6
  int v27; // r5
  int v29; // [sp+18h] [bp-214h]
  int v30; // [sp+78h] [bp-1B4h]
  int v31; // [sp+80h] [bp-1ACh]
  int (**v32)(); // [sp+84h] [bp-1A8h] BYREF
  char *v33; // [sp+88h] [bp-1A4h]
  int v34; // [sp+8Ch] [bp-1A0h]
  int v35; // [sp+90h] [bp-19Ch] BYREF
  int (**v36)(); // [sp+D4h] [bp-158h] BYREF
  char *v37; // [sp+D8h] [bp-154h]
  char *v38; // [sp+DCh] [bp-150h]
  int v39; // [sp+E0h] [bp-14Ch] BYREF
  int v40; // [sp+E4h] [bp-148h]
  _BYTE v41[64]; // [sp+E8h] [bp-144h] BYREF
  _DWORD v42[2]; // [sp+128h] [bp-104h] BYREF
  void *v43; // [sp+130h] [bp-FCh]
  void *v44; // [sp+134h] [bp-F8h]
  int v45; // [sp+138h] [bp-F4h]
  int v46; // [sp+13Ch] [bp-F0h]
  int v47; // [sp+140h] [bp-ECh]
  int v48; // [sp+144h] [bp-E8h]
  int v49; // [sp+148h] [bp-E4h]
  sead_IDisposer *v50; // [sp+14Ch] [bp-E0h]
  sead_IDisposer *v51; // [sp+150h] [bp-DCh]
  int v52; // [sp+154h] [bp-D8h]
  char v53; // [sp+158h] [bp-D4h]
  int v54; // [sp+15Ch] [bp-D0h]
  _DWORD v55[11]; // [sp+160h] [bp-CCh] BYREF
  sead_IDisposer v56; // [sp+18Ch] [bp-A0h] BYREF
  int v57; // [sp+19Ch] [bp-90h]
  int v58; // [sp+1A0h] [bp-8Ch]
  int v59; // [sp+1A4h] [bp-88h]
  int v60; // [sp+1A8h] [bp-84h]
  int v61; // [sp+1ACh] [bp-80h]
  sead_IDisposer *v62; // [sp+1B0h] [bp-7Ch]
  int v63; // [sp+1B4h] [bp-78h]
  int v64; // [sp+1B8h] [bp-74h]
  char v65; // [sp+1BCh] [bp-70h]
  int v66; // [sp+1C0h] [bp-6Ch]
  sead_IDisposer a1; // [sp+1E0h] [bp-4Ch] BYREF
  int v68; // [sp+1F0h] [bp-3Ch]
  int v69; // [sp+1F4h] [bp-38h]
  sead_IDisposer *p_a1; // [sp+1F8h] [bp-34h]
  int v71; // [sp+1FCh] [bp-30h]
  int (**v72)(); // [sp+200h] [bp-2Ch]
  int *v73; // [sp+204h] [bp-28h]
  int v74; // [sp+208h] [bp-24h]
  sead_IDisposer v75; // [sp+22Ch] [bp+0h] BYREF
  int v76; // [sp+23Ch] [bp+10h]
  int v77; // [sp+240h] [bp+14h]
  sead_IDisposer *v78; // [sp+244h] [bp+18h]
  int v79; // [sp+248h] [bp+1Ch]
  int (**v80)(); // [sp+24Ch] [bp+20h] BYREF
  int *v81; // [sp+250h] [bp+24h]
  int v82; // [sp+254h] [bp+28h]
  int v83; // [sp+258h] [bp+2Ch] BYREF
  int (**v84)(); // [sp+280h] [bp+54h] BYREF
  _BYTE *v85; // [sp+284h] [bp+58h]
  int v86; // [sp+288h] [bp+5Ch]
  _BYTE v87[263]; // [sp+28Ch] [bp+60h] BYREF
  char v88; // [sp+393h] [bp+167h] BYREF

  v2 = 0;
  v75.vtable = (int)off_60C5CB68;
  v76 = 0;
  v77 = 0;
  v78 = &v75;
  v79 = 0;
  sead_IDisposer_ctor(&v75);
  v75.vtable = (int)off_60C5CB68;
  v81 = &v83;
  v80 = &BufferedSafeStringBase_char_vtable_probably;
  v82 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v80);
  *(_BYTE *)v81 = 0;
  v80 = &off_60BD4C20;
  v75.vtable = (int)off_60BF9EF4;
  v85 = v87;
  v84 = &BufferedSafeStringBase_char_vtable_probably;
  v86 = 260;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v84);
  *v85 = 0;
  v56.vtable = (int)&sead__SafeStringBase__vtable;
  v84 = &off_60BF9688;
  v56.containingHeap = (int)"Pack/Layout.pack";
  v4 = sub_608E8770(dword_60CCEBD0, &v56, &v84);
  v56.vtable = (int)&sead__SafeStringBase__vtable;
  v56.containingHeap = (int)&byte_60B3BA34;
  v56.field_8 = 0;
  v56.field_C = 0;
  v57 = 32;
  v64 = 0;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  v60 = 0;
  v59 = 0;
  v58 = 0;
  v65 = 1;
  v66 = 0;
  sead__SafeStringBase__operator_assign((int)&v56, (int)&v84);
  v63 = v4;
  v56.field_C = (int)a2;
  v58 = 0x2000;
  v56.field_8 = (int)a2;
  v57 = 0x2000;
  v62 = &v75;
  v5 = (int (__fastcall ***)(_DWORD, int *))sead_ResourceMgr_OpenFileRelated(sead__ResourceMgr__sInstance, (int)&v56);
  if ( ((unsigned int)&dword_60C9BB24 & ~(1619151508 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB24) )
  {
    dword_60C9BB20 = (int)&off_60BF9F40;
    _cxa_guard_release(&dword_60C9BB24);
  }
  if ( v5 )
  {
    v2 = (**v5)(v5, &dword_60C9BB20);
    if ( v2 )
      v2 = (int)v5;
  }
  sub_60902104(&v75);
  sub_6043C320((int)&v75, v2);
  a1.vtable = (int)off_60C5CB68;
  v68 = 0;
  v69 = 0;
  p_a1 = &a1;
  v71 = 0;
  v7 = sead_IDisposer_ctor(&a1);
  a1.vtable = (int)off_60C5CB68;
  v73 = &FIELD_U32(v7 + (2) * 16, 0xC);
  v72 = &BufferedSafeStringBase_char_vtable_probably;
  v74 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v7[2]);
  *(_BYTE *)v73 = 0;
  v8 = a2;
  v72 = &off_60BD4C20;
  a1.vtable = (int)off_60BF9EF4;
  v30 = FIELD_U32(dword_60CD0C84, 836);
  v29 = (*(int (__fastcall **)(void *, int, int))(*(_DWORD *)a2 + 24))(a2, 0x100000, -64);
  sub_60903F5C(&v56, 0x100000u, v29);
  memset(&v55[1], 0, 40);
  v55[0] = &off_60BFAA14;
  v85 = v87;
  v84 = &BufferedSafeStringBase_char_vtable_probably;
  v86 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v84);
  *v85 = 0;
  v84 = &off_60BD94BC;
  v87[256] = 0;
  v42[0] = &sead__SafeStringBase__vtable;
  v42[1] = &byte_60B3BA34;
  v43 = 0;
  v32 = &sead__SafeStringBase__vtable;
  v44 = 0;
  v45 = 32;
  v52 = 0;
  v51 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  v53 = 1;
  v54 = 0;
  v33 = &byte_60ABC94D;
  sub_608E6B4C(&v75, v55, &v32);
  v9 = &v32;
  v32 = 0;
  sub_608E6C04(&v75, &v32, v55, &v84, 1);
  while ( v32 )
  {
    v51 = &v75;
    v50 = &a1;
    v43 = v8;
    sead__SafeStringBase__operator_assign((int)v42, (int)&v84);
    v46 = 0x2000;
    v45 = 0x2000;
    v44 = v8;
    v10 = v9;
    v32 = &sead__SafeStringBase__vtable;
    v33 = "sarc";
    v11 = (int (__fastcall ***)(_DWORD, int *))sub_60902A08(sead__ResourceMgr__sInstance, v42, v9, &v56);
    if ( ((unsigned int)&dword_60C9BB24 & ~(1619152508 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB24) )
    {
      dword_60C9BB20 = (int)&off_60BF9F40;
      _cxa_guard_release(&dword_60C9BB24);
    }
    v13 = 0;
    v14 = 0;
    if ( v11 )
    {
      v14 = (**v11)(v11, &dword_60C9BB20);
      if ( v14 )
        v14 = (int)v11;
    }
    v31 = v14;
    v38 = v41;
    v39 = 0;
    v88 = 0;
    v40 = 64;
    v41[0] = 0;
    v32 = &sead__SafeStringBase__vtable;
    v36 = &sead__SafeStringBase__vtable;
    v33 = "Layout/";
    v37 = &byte_60ABC94D;
    ((void (__fastcall *)(int (***)()))v84[3])(&v84);
    v15 = (int)v85;
    ((void (__fastcall *)(int (***)()))v84[3])(&v84);
    while ( v85[v13] )
    {
      if ( !v85[v13 + 1] )
      {
        ++v13;
        break;
      }
      if ( !v85[v13 + 2] )
      {
        v13 += 2;
        break;
      }
      v16 = v13 + 2 <= 0x7FFFF;
      v13 += 3;
      if ( !v16 )
      {
        v13 = 0;
        break;
      }
    }
    sub_608FD64C((int)v41, &v39, 64, v15, v13, v10, &v36, &v88);
    v32 = &sead__SafeStringBase__vtable;
    v36 = &sead__SafeStringBase__vtable;
    v33 = ".Nin_NX_NVN.szs";
    v37 = &byte_60ABC94D;
    v88 = 0;
    v17 = v10;
    sub_608FD64C((int)v38, &v39, v40, (int)v38, v39, v10, &v36, &v88);
    v33 = (char *)&v35;
    v32 = &BufferedSafeStringBase_char_vtable_probably;
    v34 = 68;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v10);
    *v33 = 0;
    v18 = &off_60C2A6A8;
    v19 = v38;
    v32 = &off_60C2A6A8;
    v20 = v33;
    if ( v33 != v38 )
    {
      v21 = 0;
      while ( v38[v21] )
      {
        if ( !v38[v21 + 1] )
        {
          ++v21;
          break;
        }
        if ( !v38[v21 + 2] )
        {
          v21 += 2;
          break;
        }
        v16 = v21 + 2 <= 0x7FFFF;
        v21 += 3;
        if ( !v16 )
        {
          v21 = 0;
          break;
        }
      }
      if ( v21 >= v34 )
        v21 = v34 - 1;
      qmemcpy(v33, v38, v21);
      v20[v21] = 0;
      v18 = v32;
      v19 = v33;
    }
    v36 = &sead__SafeStringBase__vtable;
    v37 = ".arc";
    ((void (__fastcall *)(int (***)()))v18[3])(v17);
    v22 = 0;
    while ( v33[v22] )
    {
      if ( !v33[v22 + 1] )
      {
        ++v22;
        break;
      }
      if ( !v33[v22 + 2] )
      {
        v22 += 2;
        break;
      }
      v16 = v22 + 2 <= 0x7FFFF;
      v22 += 3;
      if ( !v16 )
      {
        v22 = 0;
        break;
      }
    }
    ((void (__fastcall *)(int (***)()))v36[3])(&v36);
    v23 = 0;
    v24 = 0;
    if ( v22 > 0 )
      v23 = v22;
    while ( v37[v24] )
    {
      if ( !v37[v24 + 1] )
      {
        ++v24;
        break;
      }
      if ( !v37[v24 + 2] )
      {
        v24 += 2;
        break;
      }
      v16 = v24 + 2 <= 0x7FFFF;
      v24 += 3;
      if ( !v16 )
      {
        v24 = 0;
        break;
      }
    }
    if ( v24 >= v34 - v23 )
      v24 = v34 - v23 - 1;
    if ( v24 >= 1 )
    {
      ((void (__fastcall *)(int (***)()))v36[3])(&v36);
      qmemcpy(&v19[v23], v37, v24);
      if ( v24 + v23 > v22 )
        v19[v24 + v23] = 0;
    }
    v25 = (*(int (__fastcall **)(int, int (***)(), _DWORD))(*(_DWORD *)v31 + 24))(v31, v17, 0);
    v8 = a2;
    v9 = v17;
    v26 = *(void (__fastcall **)(int, int))(*(_DWORD *)v30 + 24);
    v27 = operator_new_8DE25C(0x70u, a2, 4);
    v36 = &sead__SafeStringBase__vtable;
    v37 = v38;
    timg___Combined_bntx_ref(v27, v30, &v36, v25);
    v26(v30, v27);
    v32 = 0;
    sub_608E6C04(&v75, v9, v55, &v84, 1);
  }
  sub_608E6B98(&v75, v55);
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)v8 + 28))(v8, v29);
  v55[0] = &off_60BFAA14;
  if ( v55[2] )
    sub_608E6B98(v55[2], v55);
  v56.vtable = (int)sead_Decompressor_vtable;
  if ( sead__ResourceMgr__sInstance )
    sub_609029CC(sead__ResourceMgr__sInstance, (int)&v56);
  sead__IDisposer__dtor(&v56);
  sub_60902104(&a1);
  return sub_608E60A4(&v75);
}
