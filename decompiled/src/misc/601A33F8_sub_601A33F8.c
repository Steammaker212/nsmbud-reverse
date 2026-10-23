/* sub_601A33F8
 * address: 0x601A33F8   size: 1748   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A33F8(int a1, unsigned int a2)
{
  unsigned int v3; // r9
  unsigned int v4; // r4
  char **v5; // r6
  _DWORD *v6; // r0
  int v7; // r0
  bool v8; // zf
  int result; // r0
  int v10; // r0
  int (***v11)(); // r8
  int v12; // r0
  int v13; // r11
  char *v14; // r5
  char *v15; // r4
  int (***v16)(); // r6
  signed int v17; // r8
  bool v18; // cc
  unsigned int v19; // r2
  char *v20; // r3
  bool v21; // nf
  char *v22; // r5
  char *v23; // r1
  int v24; // r0
  size_t v25; // r4
  int v26; // r0
  char *v27; // r3
  int v28; // r0
  unsigned int v29; // r5
  char **v30; // r12
  char v31; // r3
  char *v32; // r6
  char *v33; // r1
  int v34; // r0
  int v35; // [sp+4h] [bp-FFCh]
  int v36; // [sp+8h] [bp-FF8h]
  _DWORD *v37; // [sp+30h] [bp-FD0h]
  unsigned int v38; // [sp+34h] [bp-FCCh]
  int v39; // [sp+3Ch] [bp-FC4h]
  int v40; // [sp+40h] [bp-FC0h]
  int v41; // [sp+58h] [bp-FA8h]
  int (**v42)(); // [sp+5Ch] [bp-FA4h] BYREF
  char *v43; // [sp+60h] [bp-FA0h]
  int (**v44)(); // [sp+64h] [bp-F9Ch] BYREF
  char *v45; // [sp+68h] [bp-F98h]
  int v46; // [sp+6Ch] [bp-F94h]
  int v47; // [sp+70h] [bp-F90h] BYREF
  int (**v48)(); // [sp+1070h] [bp+70h] BYREF
  _DWORD v49[2]; // [sp+1074h] [bp+74h] BYREF
  int v50; // [sp+107Ch] [bp+7Ch] BYREF
  int v51; // [sp+1084h] [bp+84h] BYREF
  int (**v52)(); // [sp+1088h] [bp+88h] BYREF
  int *v53; // [sp+108Ch] [bp+8Ch]
  int v54; // [sp+1090h] [bp+90h]
  int v55; // [sp+1094h] [bp+94h] BYREF
  _DWORD v56[67]; // [sp+10B4h] [bp+B4h] BYREF
  int v57; // [sp+11C0h] [bp+1C0h] BYREF
  const char *v58; // [sp+11C4h] [bp+1C4h]

  v3 = a2;
  v4 = a2 + 1;
  v5 = (char **)v49;
  v6 = sub_6017D524(&v57, "CS_W%d", a2 + 1);
  (*(void (__fastcall **)(_DWORD *))(v57 + 12))(v6);
  sub_6017D5C0(v56, "Model/%s%s.szs", v58, ".Nin_NX_NVN");
  v7 = sub_60822378(ArchiveManagerMaybe_instance, v56);
  v8 = v3 == 8;
  if ( v3 != 8 )
    v8 = (v7 ^ 1) == 1;
  if ( !v8
    || (sub_608FDDF4((int)&v57, "CS_W%d%c", v4, 97),
        (*(void (__fastcall **)(int *))(v57 + 12))(&v57),
        sub_608FDDF4((int)v56, "Model/%s%s.szs", v58, ".Nin_NX_NVN"),
        result = sub_60822378(ArchiveManagerMaybe_instance, v56),
        result == 1) )
  {
    v53 = &v55;
    v52 = &BufferedSafeStringBase_char_vtable_probably;
    v54 = 32;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v52);
    *(_BYTE *)v53 = 0;
    v52 = &off_60BD4C20;
    sub_608FDDF4((int)&v52, "pointW%x.csv", v4);
    v41 = sub_608226EC(ArchiveManagerMaybe_instance, &v57, &v52, &v51);
    if ( v41
      || (sub_608FDDF4((int)&v52, "pointW%xa.csv", v4),
          result = sub_608226EC(ArchiveManagerMaybe_instance, &v57, &v52, &v51),
          (v41 = result) != 0) )
    {
      v49[0] = &v50;
      v48 = &BufferedSafeStringBase_char_vtable_probably;
      v49[1] = 5;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v48);
      if ( v3 >= 9 )
        v3 = 0;
      *(_BYTE *)v49[0] = 0;
      v36 = a1;
      v38 = v4;
      v48 = &off_60BD4F38;
      v40 = 0;
      v10 = a1 + 4 * v3;
      v11 = &v42;
      v35 = v10;
      v37 = (_DWORD *)(v10 + 172);
      v12 = 0;
      do
      {
        v39 = v12;
        v13 = 0;
        ++*v37;
LABEL_13:
        v42 = &sead__SafeStringBase__vtable;
        v43 = (char *)v41;
        v45 = (char *)&v47;
        v44 = &BufferedSafeStringBase_char_vtable_probably;
        v46 = 4096;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v44);
        v44 = &off_60BD5118;
        v14 = v45;
        ((void (__fastcall *)(int (***)()))v42[3])(v11);
        v15 = v43;
        if ( v14 != v43 )
        {
          v16 = v11;
          ((void (__fastcall *)(int (***)()))v42[3])(v11);
          v17 = 0;
          while ( v43[v17] )
          {
            if ( !v43[v17 + 1] )
            {
              ++v17;
              break;
            }
            if ( !v43[v17 + 2] )
            {
              v17 += 2;
              break;
            }
            v18 = v17 + 2 <= 0x7FFFF;
            v17 += 3;
            if ( !v18 )
            {
              v17 = 0;
              break;
            }
          }
          if ( v17 >= v46 )
            v17 = v46 - 1;
          qmemcpy(v14, v15, v17);
          v14[v17] = 0;
          v11 = v16;
          v5 = (char **)v49;
        }
        v19 = (unsigned int)v5[4];
        v44 = &off_60BD5100;
        while ( v13 < v19 )
        {
          v20 = &byte_60B3BA34;
          if ( v46 > v13 )
            v20 = &v45[v13];
          v21 = v13++ < 0;
          if ( v21 )
            v20 = &byte_60B3BA34;
          if ( *v20 == 44 )
          {
            v22 = *v5;
            v23 = &byte_60B3BA34;
            if ( v46 > v13 )
              v23 = &v45[v13];
            if ( v13 < 0 )
              v23 = &byte_60B3BA34;
            if ( v22 != v23 )
            {
              v24 = (int)v5[1];
              v25 = v24 - 1;
              if ( v24 > 4 )
                v25 = 4;
              qmemcpy(*v5, v23, v25);
              v22[v25] = 0;
              v23 = *v5;
            }
            v18 = (int)v5[1] <= 0;
            v42 = &sead__SafeStringBase__vtable;
            if ( v18 )
              v23 = &byte_60B3BA34;
            v43 = v23;
            v26 = sub_6019A214(v11);
            v27 = &byte_60B3BA34;
            v28 = v26 == 3;
            if ( v46 > v13 )
              v27 = &v45[v13];
            v21 = v13++ < 0;
            if ( v21 )
              v27 = &byte_60B3BA34;
            if ( *v27 == 10 )
            {
              v40 += v28;
              goto LABEL_13;
            }
            v29 = (unsigned int)v5[4];
            v30 = v5;
            v31 = 0;
            do
            {
              v32 = &byte_60B3BA34;
              if ( v46 > v13 )
                v32 = &v45[v13];
              v21 = v13 < 0;
              v31 |= v13++ >= v29;
              if ( v21 )
                v32 = &byte_60B3BA34;
            }
            while ( *v32 != 10 );
            v5 = v30;
            v40 += v28;
            if ( (v31 & 1) == 0 )
              goto LABEL_13;
            break;
          }
        }
        (*((void (__fastcall **)(int (***)()))v5[5] + 3))(&v52);
        v33 = v5[6];
        v34 = 0;
        while ( v33[v34] )
        {
          if ( !v33[v34 + 1] )
          {
            if ( v34 == 10 )
              goto LABEL_66;
            goto LABEL_64;
          }
          if ( !v33[v34 + 2] )
          {
            v34 += 2;
            break;
          }
          v18 = v34 + 2 <= 0x7FFFF;
          v34 += 3;
          if ( !v18 )
            goto LABEL_64;
        }
        if ( v34 == 11 )
          break;
LABEL_64:
        sub_608FDDF4((int)&v57, "CS_W%d%c", v38, v39 + 98);
        (*((void (__fastcall **)(int *))v5[83] + 3))(&v57);
        sub_608FDDF4((int)v56, "Model/%s%s.szs", v5[84], ".Nin_NX_NVN");
        if ( sub_60822378(ArchiveManagerMaybe_instance, v56) != 1 )
          break;
        sub_608FDDF4((int)&v52, "pointW%x%c.csv", v38, v39 + 98);
        v41 = sub_608226EC(ArchiveManagerMaybe_instance, &v57, &v52, &v51);
        v12 = v39 + 1;
      }
      while ( v41 );
LABEL_66:
      result = FIELD_U8(v36, 2840);
      if ( !FIELD_U8(v36, 2840) )
      {
        FIELD_U32(v35, 2296) = v40;
        return v40;
      }
    }
  }
  return result;
}
