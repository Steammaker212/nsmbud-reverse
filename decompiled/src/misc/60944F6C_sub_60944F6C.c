/* sub_60944F6C
 * address: 0x60944F6C   size: 896   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60944F6C(float *a1, int a2, int a3)
{
  int v5; // r6
  int v6; // r0
  unsigned int v7; // r6
  int v8; // r4
  int v9; // r0
  char *v10; // r6
  int (***v11)(); // r4
  int v12; // r9
  int v13; // r5
  char *v14; // r11
  int v15; // r7
  int v16; // r6
  float *v17; // r5
  int v18; // r0
  unsigned int v19; // r10
  float *v20; // r5
  unsigned int v21; // r4
  int v22; // [sp+10h] [bp-68h]
  int v23; // [sp+14h] [bp-64h]
  float *v24; // [sp+28h] [bp-50h]
  int v25; // [sp+2Ch] [bp-4Ch]
  int v26; // [sp+30h] [bp-48h]
  float *v27; // [sp+34h] [bp-44h]
  unsigned int v28; // [sp+3Ch] [bp-3Ch]
  int (**v29)(); // [sp+40h] [bp-38h] BYREF
  const char *v30; // [sp+44h] [bp-34h]
  int v31; // [sp+48h] [bp-30h]
  int (**v32)(); // [sp+4Ch] [bp-2Ch] BYREF
  char *v33; // [sp+50h] [bp-28h]

  v29 = &sead__SafeStringBase__vtable;
  v32 = &sead__SafeStringBase__vtable;
  v30 = "param";
  v33 = &byte_60ABC94D;
  v5 = sub_609A66E8(a2, &v29, &v32, a3);
  sub_609A5D84(v5, 2, a3);
  v29 = &sead__SafeStringBase__vtable;
  v32 = &sead__SafeStringBase__vtable;
  v30 = "name";
  v33 = off_60C5CB34;
  sub_609A6388(v5, &v29, &v32, a3);
  v29 = &sead__SafeStringBase__vtable;
  v30 = "type";
  v6 = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 28))(a1);
  v32 = &sead__SafeStringBase__vtable;
  v33 = off_60C5E578[v6 - 9];
  sub_609A6388(v5, &v29, &v32, a3);
  if ( (unsigned int)((*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 28))(a1) - 9) <= 3 )
  {
    v22 = v5;
    v7 = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 48))(a1);
    v8 = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 28))(a1) - 8;
    v23 = a3;
    v28 = 16 * (2 * v8 + (v7 >> 2));
    v9 = operator_new_8DE2C8(v28, a3, 4);
    v10 = (char *)v9;
    v25 = v8;
    if ( v8 )
    {
      v11 = &v29;
      v12 = 0;
      v13 = 0;
      v14 = (char *)v9;
      v24 = a1;
      v27 = a1 + 17;
      do
      {
        v30 = &v10[v12];
        v29 = &BufferedSafeStringBase_char_vtable_probably;
        v31 = v28 - v12;
        if ( (int)(v28 - v12) <= 0 )
        {
          v30 = 0;
          v31 = 0;
        }
        else
        {
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v11);
        }
        v15 = sub_608FDDF4((int)v11, "\n") + v12;
        v30 = &v10[v15];
        v29 = &BufferedSafeStringBase_char_vtable_probably;
        v31 = v28 - v15;
        if ( (int)(v28 - v15) <= 0 )
        {
          v30 = 0;
          v31 = 0;
        }
        else
        {
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v11);
        }
        v26 = v13;
        v16 = (int)v11;
        v17 = &a1[3 * v13];
        v18 = sub_608FDDF4((int)v11, "%d %d\n", *((unsigned __int8 *)v17 + 23), *((unsigned __int8 *)v17 + 20));
        v19 = *((unsigned __int8 *)v17 + 23);
        v12 = v18 + v15;
        if ( *((_BYTE *)v17 + 23) )
        {
          v20 = v27;
          v21 = 0;
          do
          {
            v30 = &v14[v12];
            v29 = &BufferedSafeStringBase_char_vtable_probably;
            v31 = v28 - v12;
            if ( (int)(v28 - v12) <= 0 )
            {
              v30 = 0;
              v31 = 0;
            }
            else
            {
              sead__BufferedSafeStringBase__assureTerminationImpl_const(v16);
            }
            v21 += 3;
            v12 += sub_608FDDF4(v16, "%f %f %f\n", *v20, v20[1], v20[2]);
            v20 += 3;
          }
          while ( v21 < v19 );
        }
        a1 = v24;
        v11 = (int (***)())v16;
        v10 = v14;
        v13 = v26 + 1;
        v27 += 32;
      }
      while ( v26 + 1 != v25 );
    }
    v29 = &sead__SafeStringBase__vtable;
    v30 = v10;
    sub_609A6570(v22, &v29, v23);
    if ( v10 )
      operator_delete_8DE3FC(v10);
  }
}
