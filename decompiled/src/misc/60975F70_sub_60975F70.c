/* sub_60975F70
 * address: 0x60975F70   size: 1040   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60975F70(int a1, int a2, _BYTE *a3, int a4)
{
  unsigned int v8; // r5
  int v9; // r0
  int v10; // r7
  int v11; // r9
  float *v12; // r2
  int v13; // r7
  unsigned int *v14; // r1
  unsigned int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r7
  int v19; // r7
  int v20; // r0
  int result; // r0
  int v22; // r7
  unsigned int *v23; // r1
  unsigned int v24; // r0
  int v25; // r7
  unsigned int *v26; // r1
  unsigned int v27; // r0
  int v28; // [sp+Ch] [bp-54h]
  int v29; // [sp+10h] [bp-50h] BYREF
  char *v30; // [sp+14h] [bp-4Ch]

  v8 = FIELD_U32(a1, 2352);
  v9 = FIELD_U32(a1, 2296);
  v29 = (int)&sead__SafeStringBase__vtable;
  v30 = off_60C5CB34;
  if ( (v8 & 0x800) != 0 )
  {
    v10 = sub_60977248(v9, a2, &v29, a4);
    v11 = (v8 >> 4) & 4 ^ 6;
    v28 = -1;
  }
  else
  {
    v28 = sub_60977248(v9, a2, &v29, a4);
    LOBYTE(v11) = 6;
    v10 = -1;
  }
  sub_6095849C((int)&v29, a2, FIELD_U8(a1, 4), 0, FIELD_U32(a1, 8), (FIELD_U32(a1, 2352) & 8) != 0, (int)a3);
  v12 = *(float **)(a1 + 8);
  if ( v12 )
    sub_6090E560((int)(a3 + 48), a2, v12);
  (*(void (__fastcall **)(_BYTE *, int *))(*(_DWORD *)a3 + 36))(a3, &v29);
  sub_60956560((int)a3, &v29);
  if ( v10 != -1 )
  {
    v13 = sub_60977398(FIELD_U32(a1, 2296), a2, v10);
    if ( (FIELD_U8(v13, 20) & 1) != 0 )
    {
      sub_60955518((int)a3, FIELD_U32(v13, 24));
      FIELD_U32(v13, 588) = a3;
      if ( (a3[81] & 4) != 0 )
      {
        v14 = (unsigned int *)(a1 + 3584);
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 + 1, v14) );
        *(_DWORD *)(FIELD_U32(a1, 3592) + 4 * v15) = v13;
      }
      if ( FIELD_U32(a1, 3624) )
      {
        sub_60958528((int)&v29, a2, FIELD_U8(a1, 4), FIELD_U32(a1, 8));
        v29 = 4;
        v16 = FIELD_U32(a1, 3624);
        if ( (FIELD_U8(v16, 32) & 1) != 0 )
          (**(void (__fastcall ***)(int, int *))(v16 + 36))(v16 + 36, &v29);
      }
    }
  }
  v17 = v8 & 0x800;
  if ( (v8 & 0x800) != 0 )
    v17 = 1;
  sub_60975BDC(a1, a2, (int)a3, v11, 0, v17, a4 + 1);
  v18 = -1;
  if ( (v8 & 0x800) != 0 )
  {
    v19 = FIELD_U32(a1, 2296);
    v29 = (int)&sead__SafeStringBase__vtable;
    v30 = off_60C5CB34;
    v20 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a3 + 16))(a3);
    v18 = sub_60977248(v19, a2, &v29, v20 + a4 + 1);
  }
  sub_6095849C((int)&v29, a2, FIELD_U8(a1, 4), 0, FIELD_U32(a1, 8), (FIELD_U32(a1, 2352) & 8) != 0, (int)a3);
  nullsub_126();
  result = (*(int (__fastcall **)(_BYTE *, int *))(*(_DWORD *)a3 + 56))(a3, &v29);
  if ( v18 != -1 )
  {
    v22 = sub_60977398(FIELD_U32(a1, 2296), a2, v18);
    result = FIELD_U8(v22, 20);
    if ( (result & 1) != 0 )
    {
      sub_60955518((int)a3, FIELD_U32(v22, 24));
      FIELD_U32(v22, 588) = a3;
      if ( (a3[81] & 4) != 0 )
      {
        v23 = (unsigned int *)(a1 + 3584);
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 + 1, v23) );
        *(_DWORD *)(FIELD_U32(a1, 3592) + 4 * v24) = v22;
      }
      result = FIELD_U32(a1, 3624);
      if ( result )
      {
        sub_60958528((int)&v29, a2, FIELD_U8(a1, 4), FIELD_U32(a1, 8));
        v29 = 4;
        result = FIELD_U32(a1, 3624);
        if ( (FIELD_U8(result, 32) & 1) != 0 )
          result = (**(int (__fastcall ***)(int, int *))(result + 36))(result + 36, &v29);
      }
    }
  }
  if ( v28 != -1 )
  {
    v25 = sub_60977398(FIELD_U32(a1, 2296), a2, v28);
    result = FIELD_U8(v25, 20);
    if ( (result & 1) != 0 )
    {
      if ( a3 )
      {
        sub_60955518((int)a3, FIELD_U32(v25, 24));
        FIELD_U32(v25, 588) = a3;
        if ( (a3[81] & 4) == 0 )
          goto LABEL_37;
      }
      else
      {
        FIELD_U32(v25, 588) = 0;
      }
      v26 = (unsigned int *)(a1 + 3584);
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 + 1, v26) );
      *(_DWORD *)(FIELD_U32(a1, 3592) + 4 * v27) = v25;
LABEL_37:
      result = FIELD_U32(a1, 3624);
      if ( result )
      {
        sub_60958528((int)&v29, a2, FIELD_U8(a1, 4), FIELD_U32(a1, 8));
        v29 = 4;
        result = FIELD_U32(a1, 3624);
        if ( (FIELD_U8(result, 32) & 1) != 0 )
          return (**(int (__fastcall ***)(int, int *))(result + 36))(result + 36, &v29);
      }
    }
  }
  return result;
}
