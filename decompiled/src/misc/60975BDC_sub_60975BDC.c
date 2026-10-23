/* sub_60975BDC
 * address: 0x60975BDC   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60975BDC(int a1, int a2, int a3, char a4, int a5, int a6, int a7)
{
  int v11; // r7
  unsigned int result; // r0
  int v13; // r6
  int v14; // r8
  unsigned int *v15; // r9
  unsigned int v16; // r1
  int v17; // r5
  int v18; // r0
  int v19; // r2
  bool v20; // zf
  int v21; // r0
  int v22; // r5
  int v23; // r5
  unsigned int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r2
  int v28; // r0
  int v29; // r5
  int v30; // r5
  unsigned int v31; // r0
  int v32; // r0
  int v33; // [sp+0h] [bp-90h]
  int v34; // [sp+4h] [bp-8Ch]
  unsigned int v35[11]; // [sp+14h] [bp-7Ch] BYREF
  int v36; // [sp+40h] [bp-50h] BYREF
  char *v37; // [sp+44h] [bp-4Ch]

  sub_6095849C((int)v35, a2, FIELD_U8(a1, 4), a5, FIELD_U32(a1, 8), (FIELD_U32(a1, 2352) & 8) != 0, a3);
  v11 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 16))(a3);
  result = 0;
  v35[0] = 0;
  if ( v11 >= 1 )
  {
    v13 = a4 & 4;
    v14 = a4 & 2;
    v15 = (unsigned int *)(a1 + 3584);
    v16 = 0;
    if ( (a4 & 1) != 0 )
    {
      do
      {
        v26 = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)a3 + 64))(a3, v16);
        v27 = v13;
        if ( v13 )
          v27 = 1;
        if ( (v27 & v26) == ((v14 == 0) | v26) )
        {
          if ( a6 )
          {
            v28 = FIELD_U32(a1, 2296);
            v36 = (int)&sead__SafeStringBase__vtable;
            v37 = off_60C5CB34;
            v29 = sub_60977248(v28, a2, &v36, v35[0] + a7, v33, v34);
            sub_609565DC((_DWORD *)a3, v35);
            if ( v29 != -1 )
            {
              v30 = sub_60977398(FIELD_U32(a1, 2296), a2, v29);
              if ( (FIELD_U8(v30, 20) & 1) != 0 )
              {
                sub_60955518(a3, FIELD_U32(v30, 24));
                FIELD_U32(v30, 588) = a3;
                if ( (FIELD_U8(a3, 81) & 4) != 0 )
                {
                  do
                    v31 = __ldrex(v15);
                  while ( __strex(v31 + 1, v15) );
                  *(_DWORD *)(FIELD_U32(a1, 3592) + 4 * v31) = v30;
                }
                if ( FIELD_U32(a1, 3624) )
                {
                  sub_60958528((int)&v36, a2, FIELD_U8(a1, 4), FIELD_U32(a1, 8));
                  v36 = 4;
                  v32 = FIELD_U32(a1, 3624);
                  if ( (FIELD_U8(v32, 32) & 1) != 0 )
                    (**(void (__fastcall ***)(int, int *))(v32 + 36))(v32 + 36, &v36);
                }
              }
            }
          }
          else
          {
            sub_609565DC((_DWORD *)a3, v35);
          }
        }
        result = v35[0];
        v16 = ++v35[0];
      }
      while ( (int)v35[0] < v11 );
    }
    else
    {
      do
      {
        v17 = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)a3 + 60))(a3, v16);
        v18 = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)a3 + 64))(a3, v35[0]);
        v19 = v13;
        if ( v13 )
          v19 = 1;
        v20 = v17 == 0;
        if ( !v17 )
          v20 = (v19 & v18) == ((v14 == 0) | v18);
        if ( v20 )
        {
          if ( a6 )
          {
            v21 = FIELD_U32(a1, 2296);
            v36 = (int)&sead__SafeStringBase__vtable;
            v37 = off_60C5CB34;
            v22 = sub_60977248(v21, a2, &v36, v35[0] + a7, v33, v34);
            sub_609565DC((_DWORD *)a3, v35);
            if ( v22 != -1 )
            {
              v23 = sub_60977398(FIELD_U32(a1, 2296), a2, v22);
              if ( (FIELD_U8(v23, 20) & 1) != 0 )
              {
                sub_60955518(a3, FIELD_U32(v23, 24));
                FIELD_U32(v23, 588) = a3;
                if ( (FIELD_U8(a3, 81) & 4) != 0 )
                {
                  do
                    v24 = __ldrex(v15);
                  while ( __strex(v24 + 1, v15) );
                  *(_DWORD *)(FIELD_U32(a1, 3592) + 4 * v24) = v23;
                }
                if ( FIELD_U32(a1, 3624) )
                {
                  sub_60958528((int)&v36, a2, FIELD_U8(a1, 4), FIELD_U32(a1, 8));
                  v36 = 4;
                  v25 = FIELD_U32(a1, 3624);
                  if ( (FIELD_U8(v25, 32) & 1) != 0 )
                    (**(void (__fastcall ***)(int, int *))(v25 + 36))(v25 + 36, &v36);
                }
              }
            }
          }
          else
          {
            sub_609565DC((_DWORD *)a3, v35);
          }
        }
        result = v35[0];
        v16 = ++v35[0];
      }
      while ( (int)v35[0] < v11 );
    }
  }
  return result;
}
