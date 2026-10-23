/* sub_601E65D8
 * address: 0x601E65D8   size: 1540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601E65D8()
{
  int v0; // r4
  int result; // r0
  unsigned int v2; // r6
  int v3; // r9
  _DWORD *v4; // r5
  int *v5; // r4
  int *v6; // r7
  int v7; // r0
  signed int v8; // r5
  bool v9; // cc
  int v10; // r0
  unsigned __int8 v11; // r4
  unsigned __int8 v12; // r0
  unsigned int v13; // r6
  _DWORD *v14; // r7
  int *v15; // r4
  int *v16; // r5
  int v17; // r0
  signed int v18; // r8
  int v19; // r0
  unsigned __int8 v20; // r4
  unsigned __int8 v21; // r0
  int v22; // r9
  unsigned int i; // r7
  _DWORD *v24; // r6
  int *v25; // r4
  int *v26; // r5
  int v27; // r0
  signed int v28; // r6
  int v29; // r0
  unsigned __int8 v30; // r4
  unsigned __int8 v31; // r0
  unsigned int v32; // r7
  _DWORD *v33; // r6
  int *v34; // r4
  int *v35; // r5
  int v36; // r0
  signed int v37; // r8
  int v38; // r0
  unsigned __int8 v39; // r4
  unsigned __int8 v40; // r0
  _DWORD *v41; // [sp+4h] [bp-64h]
  int v42; // [sp+Ch] [bp-5Ch]
  int v43; // [sp+Ch] [bp-5Ch]
  int v44; // [sp+10h] [bp-58h]
  unsigned int v45; // [sp+14h] [bp-54h]
  int (**v46)(); // [sp+18h] [bp-50h] BYREF
  int *v47; // [sp+1Ch] [bp-4Ch]
  int v48; // [sp+20h] [bp-48h]
  int v49; // [sp+24h] [bp-44h] BYREF
  int (**v50)(); // [sp+30h] [bp-38h] BYREF
  int *v51; // [sp+34h] [bp-34h]
  int v52; // [sp+38h] [bp-30h]
  int v53; // [sp+3Ch] [bp-2Ch] BYREF

  v51 = &v53;
  v50 = &BufferedSafeStringBase_char_vtable_probably;
  v52 = 5;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v50);
  *(_BYTE *)v51 = 0;
  v50 = &off_60BD4F38;
  v47 = &v49;
  v46 = &BufferedSafeStringBase_char_vtable_probably;
  v48 = 10;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v46);
  *(_BYTE *)v47 = 0;
  v0 = dword_60CC6D78;
  v46 = &off_60BD4F50;
  v45 = FIELD_U32(dword_60CC6D78, 436);
  v44 = sub_601A443C(dword_60C89E18, FIELD_U32(dword_60CC6D78, 428), FIELD_U32(dword_60CC6D78, 432));
  result = FIELD_U32(v0, 36);
  if ( result == 1 )
  {
    v22 = sub_60182EA8(v44, 1u, v45);
    if ( v22 >= 1 )
    {
      for ( i = 0; i != v22; ++i )
      {
        v24 = (_DWORD *)sub_60182E68(v44, 1u, v45, i);
        v25 = v51;
        (*(void (__fastcall **)(_DWORD *))(*v24 + 12))(v24);
        v26 = (int *)v24[1];
        if ( v25 != v26 )
        {
          (*(void (__fastcall **)(_DWORD *))(*v24 + 12))(v24);
          v27 = v24[1];
          v28 = 0;
          while ( *(_BYTE *)(v27 + v28) )
          {
            if ( !*(_BYTE *)(v27 + v28 + 1) )
            {
              ++v28;
              break;
            }
            if ( !*(_BYTE *)(v27 + v28 + 2) )
            {
              v28 += 2;
              break;
            }
            v9 = v28 + 2 <= 0x7FFFF;
            v28 += 3;
            if ( !v9 )
            {
              v28 = 0;
              break;
            }
          }
          if ( v28 >= v52 )
            v28 = v52 - 1;
          qmemcpy(v25, v26, v28);
          *((_BYTE *)v25 + v28) = 0;
        }
        v29 = sub_6040D864(&v50);
        v30 = v29;
        if ( v29 != -1 )
        {
          v31 = sub_6040D4F0(&v50);
          sub_603F727C(dword_60CC6D78 + 796, v31, v30);
        }
      }
    }
    result = sub_60182F10(v44, 1, v45);
    v43 = result;
    if ( result >= 1 )
    {
      v32 = 0;
      do
      {
        v33 = (_DWORD *)sub_60182ED0(v44, 1u, v45, v32);
        v34 = v47;
        (*(void (__fastcall **)(_DWORD *))(*v33 + 12))(v33);
        v35 = (int *)v33[1];
        if ( v34 != v35 )
        {
          (*(void (__fastcall **)(_DWORD *))(*v33 + 12))(v33);
          v36 = v33[1];
          v37 = 0;
          while ( *(_BYTE *)(v36 + v37) )
          {
            if ( !*(_BYTE *)(v36 + v37 + 1) )
            {
              ++v37;
              break;
            }
            if ( !*(_BYTE *)(v36 + v37 + 2) )
            {
              v37 += 2;
              break;
            }
            v9 = v37 + 2 <= 0x7FFFF;
            v37 += 3;
            if ( !v9 )
            {
              v37 = 0;
              break;
            }
          }
          if ( v37 >= v48 )
            v37 = v48 - 1;
          qmemcpy(v34, v35, v37);
          *((_BYTE *)v34 + v37) = 0;
        }
        sub_60199C48(&v46, (int)&v50, 0);
        v38 = sub_6040D864(&v50);
        v39 = v38;
        if ( v38 != -1 )
        {
          v40 = sub_6040D4F0(&v50);
          sub_603F727C(dword_60CC6D78 + 796, v40, v39);
        }
        result = v43;
        ++v32;
      }
      while ( v32 != v43 );
    }
  }
  else if ( !result )
  {
    v41 = (_DWORD *)v0;
    v2 = 0;
    v3 = sub_60182EA8(v44, 0, v45);
    if ( v3 >= 1 )
    {
      do
      {
        v4 = (_DWORD *)sub_60182E68(v44, 0, v45, v2);
        v5 = v51;
        (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
        v6 = (int *)v4[1];
        if ( v5 != v6 )
        {
          (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
          v7 = v4[1];
          v8 = 0;
          while ( *(_BYTE *)(v7 + v8) )
          {
            if ( !*(_BYTE *)(v7 + v8 + 1) )
            {
              ++v8;
              break;
            }
            if ( !*(_BYTE *)(v7 + v8 + 2) )
            {
              v8 += 2;
              break;
            }
            v9 = v8 + 2 <= 0x7FFFF;
            v8 += 3;
            if ( !v9 )
            {
              v8 = 0;
              break;
            }
          }
          if ( v8 >= v52 )
            v8 = v52 - 1;
          qmemcpy(v5, v6, v8);
          *((_BYTE *)v5 + v8) = 0;
        }
        v10 = sub_6040D864(&v50);
        v11 = v10;
        if ( v10 != -1 )
        {
          v12 = sub_6040D4F0(&v50);
          sub_603F727C(dword_60CC6D78 + 796, v12, v11);
        }
        ++v2;
      }
      while ( v2 != v3 );
    }
    v13 = 0;
    v42 = sub_60182F10(v44, 0, v45);
    if ( v42 >= 1 )
    {
      do
      {
        v14 = (_DWORD *)sub_60182ED0(v44, 0, v45, v13);
        v15 = v47;
        (*(void (__fastcall **)(_DWORD *))(*v14 + 12))(v14);
        v16 = (int *)v14[1];
        if ( v15 != v16 )
        {
          (*(void (__fastcall **)(_DWORD *))(*v14 + 12))(v14);
          v17 = v14[1];
          v18 = 0;
          while ( *(_BYTE *)(v17 + v18) )
          {
            if ( !*(_BYTE *)(v17 + v18 + 1) )
            {
              ++v18;
              break;
            }
            if ( !*(_BYTE *)(v17 + v18 + 2) )
            {
              v18 += 2;
              break;
            }
            v9 = v18 + 2 <= 0x7FFFF;
            v18 += 3;
            if ( !v9 )
            {
              v18 = 0;
              break;
            }
          }
          if ( v18 >= v48 )
            v18 = v48 - 1;
          qmemcpy(v15, v16, v18);
          *((_BYTE *)v15 + v18) = 0;
        }
        sub_60199C48(&v46, (int)&v50, 0);
        v19 = sub_6040D864(&v50);
        v20 = v19;
        if ( v19 != -1 )
        {
          v21 = sub_6040D4F0(&v50);
          sub_603F727C(dword_60CC6D78 + 796, v21, v20);
        }
        ++v13;
      }
      while ( v13 != v42 );
    }
    result = v41[125];
    if ( result == 2 )
    {
      sub_6019B574(v41[107], v41[110]);
      result = v41[112];
      if ( result != 3 )
      {
        result = result == 2;
        v41[125] = result;
      }
    }
  }
  return result;
}
