/* ArchiveManagerMaybe_loadPack
 * address: 0x60821B28   size: 1920   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ArchiveManagerMaybe_loadPack(int r0_0, _DWORD *a2, int a3)
{
  int v3; // r9
  int (__fastcall ***v4)(_DWORD, int *); // r0
  sead_IDisposer *v5; // r0
  int (__fastcall ***v6)(_DWORD, int *); // r4
  char v7; // r12
  int v8; // r7
  int v9; // r5
  int v10; // r6
  bool v11; // cc
  sead_IDisposer *v12; // r4
  char *containingHeap; // r5
  const char *v14; // r11
  signed int v15; // r7
  signed int v16; // r0
  _DWORD *v17; // r8
  int v18; // r7
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  bool v23; // nf
  _DWORD *v24; // r0
  int v25; // r0
  void *heap; // [sp+7Ch] [bp-29Ch]
  int (**v30)(); // [sp+80h] [bp-298h] BYREF
  char *v31; // [sp+84h] [bp-294h]
  int (**v32)(); // [sp+88h] [bp-290h] BYREF
  const char *v33; // [sp+8Ch] [bp-28Ch]
  int (**v34)(); // [sp+90h] [bp-288h] BYREF
  char *v35; // [sp+94h] [bp-284h] BYREF
  int v36; // [sp+98h] [bp-280h]
  _BYTE v37[64]; // [sp+9Ch] [bp-27Ch] BYREF
  _DWORD v38[2]; // [sp+DCh] [bp-23Ch] BYREF
  int v39; // [sp+E4h] [bp-234h]
  int v40; // [sp+E8h] [bp-230h]
  int v41; // [sp+ECh] [bp-22Ch]
  int v42; // [sp+F0h] [bp-228h]
  int v43; // [sp+F4h] [bp-224h]
  int v44; // [sp+F8h] [bp-220h]
  int v45; // [sp+FCh] [bp-21Ch]
  sead_IDisposer *v46; // [sp+100h] [bp-218h]
  _BYTE *v47; // [sp+104h] [bp-214h]
  int v48; // [sp+108h] [bp-210h]
  char v49; // [sp+10Ch] [bp-20Ch]
  int v50; // [sp+110h] [bp-208h]
  int (**v51)(); // [sp+114h] [bp-204h] BYREF
  _BYTE *v52; // [sp+118h] [bp-200h]
  int v53; // [sp+11Ch] [bp-1FCh]
  _BYTE v54[260]; // [sp+120h] [bp-1F8h] BYREF
  _DWORD v55[11]; // [sp+224h] [bp-F4h] BYREF
  sead_IDisposer a1; // [sp+250h] [bp-C8h] BYREF
  int v57; // [sp+260h] [bp-B8h]
  int v58; // [sp+264h] [bp-B4h]
  sead_IDisposer *p_a1; // [sp+268h] [bp-B0h]
  int v60; // [sp+26Ch] [bp-ACh]
  int (**v61)(); // [sp+270h] [bp-A8h]
  int *v62; // [sp+274h] [bp-A4h]
  int v63; // [sp+278h] [bp-A0h]
  _BYTE v64[87]; // [sp+29Ch] [bp-7Ch] BYREF
  char v65[37]; // [sp+2F3h] [bp-25h] BYREF

  v3 = a3;
  v4 = sub_608211F8((int)a2, a3);
  sub_6043C320((int)v64, (int)v4);
  a1.vtable = (int)off_60C5CB68;
  v57 = 0;
  v58 = 0;
  p_a1 = &a1;
  v60 = 0;
  v5 = sead_IDisposer_ctor(&a1);
  a1.vtable = (int)off_60C5CB68;
  v62 = &v5[2].field_C;
  v61 = &BufferedSafeStringBase_char_vtable_probably;
  v63 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v5[2]);
  *(_BYTE *)v62 = 0;
  v61 = &off_60BD4C20;
  a1.vtable = (int)off_60BF9EF4;
  memset(&v55[1], 0, 40);
  v55[0] = &off_60BFAA14;
  v52 = v54;
  v51 = &BufferedSafeStringBase_char_vtable_probably;
  v53 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v51);
  *v52 = 0;
  v51 = &off_60BD94BC;
  v54[256] = 0;
  v38[0] = &sead__SafeStringBase__vtable;
  v38[1] = &byte_60B3BA34;
  v39 = 0;
  v34 = &sead__SafeStringBase__vtable;
  v40 = 0;
  v41 = 32;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v49 = 1;
  v50 = 0;
  v35 = &byte_60ABC94D;
  sub_608E6B4C(v64, v55, &v34);
  v34 = 0;
  sub_608E6C04(v64, &v34, v55, &v51, 1);
  if ( v34 )
  {
    heap = (void *)v3;
    do
    {
      v47 = v64;
      v46 = &a1;
      v39 = v3;
      sead__SafeStringBase__operator_assign((int)v38, (int)&v51);
      v42 = 0x2000;
      v41 = 0x2000;
      v40 = v3;
      v34 = &sead__SafeStringBase__vtable;
      v35 = "sarc";
      v6 = (int (__fastcall ***)(_DWORD, int *))sub_60902A08(
                                                  sead__ResourceMgr__sInstance,
                                                  v38,
                                                  &v34,
                                                  FIELD_U32(r0_0, 17448));
      if ( ((unsigned int)&dword_60C9BB24 & ~(1619140212 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB24) )
      {
        dword_60C9BB20 = (int)&off_60BF9F40;
        _cxa_guard_release(&dword_60C9BB24);
      }
      v8 = 0;
      v9 = 0;
      if ( v6 )
      {
        v9 = (**v6)(v6, &dword_60C9BB20);
        if ( v9 )
          v9 = (int)v6;
      }
      v34 = (int (**)())v37;
      v35 = 0;
      v65[0] = 0;
      v36 = 64;
      v37[0] = 0;
      v32 = &sead__SafeStringBase__vtable;
      v30 = &sead__SafeStringBase__vtable;
      v33 = "Model/";
      v31 = &byte_60ABC94D;
      ((void (__fastcall *)(int (***)()))v51[3])(&v51);
      v10 = (int)v52;
      ((void (__fastcall *)(int (***)()))v51[3])(&v51);
      while ( v52[v8] )
      {
        if ( !v52[v8 + 1] )
        {
          ++v8;
          break;
        }
        if ( !v52[v8 + 2] )
        {
          v8 += 2;
          break;
        }
        v11 = v8 + 2 <= 0x7FFFF;
        v8 += 3;
        if ( !v11 )
        {
          v8 = 0;
          break;
        }
      }
      sub_608FD64C((int)v37, (int *)&v35, 64, v10, v8, &v32, &v30, v65);
      v65[0] = 0;
      v32 = &sead__SafeStringBase__vtable;
      v33 = ".Nin_NX_NVN.szs";
      v30 = &sead__SafeStringBase__vtable;
      v31 = &byte_60ABC94D;
      sub_608FD64C((int)v34, (int *)&v35, v36, (int)v34, (int)v35, &v32, &v30, v65);
      v12 = (sead_IDisposer *)operator_new_8DE25C(0x40u, heap, 4);
      v32 = &sead__SafeStringBase__vtable;
      v33 = (const char *)v34;
      sead_IDisposer_ctor(v12);
      FIELD_U32(v12, 0x0) = (int)off_60C2A5C0;
      v12[1].containingHeap = (int)&v12[1].field_C;
      v12[1].vtable = (int)&BufferedSafeStringBase_char_vtable_probably;
      v12[1].field_8 = 32;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v12[1]);
      *(_BYTE *)v12[1].containingHeap = 0;
      v12[1].vtable = (int)&off_60BD4C20;
      v12[3].field_C = v9;
      containingHeap = (char *)v12[1].containingHeap;
      ((void (__fastcall *)(int (***)()))v32[3])(&v32);
      v14 = v33;
      if ( containingHeap != v33 )
      {
        ((void (__fastcall *)(int (***)()))v32[3])(&v32);
        v15 = 0;
        while ( v33[v15] )
        {
          if ( !v33[v15 + 1] )
          {
            ++v15;
            break;
          }
          if ( !v33[v15 + 2] )
          {
            v15 += 2;
            break;
          }
          v11 = v15 + 2 <= 0x7FFFF;
          v15 += 3;
          if ( !v11 )
          {
            v15 = 0;
            break;
          }
        }
        v16 = v12[1].field_8;
        if ( v15 >= v16 )
          v15 = v16 - 1;
        qmemcpy(containingHeap, v14, v15);
        containingHeap[v15] = 0;
      }
      v30 = (int (**)())v12;
      v32 = &sead__SafeStringBase__vtable;
      v33 = (const char *)v34;
      sub_6082189C(r0_0 + 20, &v32, &v30);
      v34 = 0;
      sub_608E6C04(v64, &v34, v55, &v51, 1);
      v3 = (int)heap;
    }
    while ( v34 );
  }
  sub_608E6B98(v64, v55);
  v55[0] = &off_60BFAA14;
  if ( v55[2] )
    sub_608E6B98(v55[2], v55);
  v17 = *(_DWORD **)(r0_0 + 20);
  if ( v17 )
  {
    while ( 2 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v18 = a2[1];
      (*(void (__fastcall **)(_DWORD *))(v17[4] + 12))(v17 + 4);
      v19 = v17[5];
      if ( v18 == v19 )
      {
LABEL_45:
        v25 = v17[6];
        if ( v25 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 4))(v25);
      }
      else
      {
        v20 = a2[1];
        v21 = 0;
        while ( 1 )
        {
          v22 = *(unsigned __int8 *)(v20 + v21);
          v23 = v22 - *(unsigned __int8 *)(v19 + v21) < 0;
          if ( v22 != *(unsigned __int8 *)(v19 + v21) )
            break;
          if ( *(_BYTE *)(v20 + v21) )
          {
            if ( ++v21 < 0x80000 )
              continue;
          }
          if ( !v17 )
            goto LABEL_47;
          goto LABEL_45;
        }
        v24 = v17 + 2;
        if ( v23 )
          v24 = v17 + 1;
        v17 = (_DWORD *)*v24;
        if ( *v24 )
          continue;
      }
      break;
    }
  }
LABEL_47:
  sub_60902104(&a1);
  return sub_608E60A4(v64);
}
