/* sub_6078E608
 * address: 0x6078E608   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078E608(float *a1, int a2)
{
  int v3; // r0
  unsigned int v4; // r0
  int v5; // r5
  float *v6; // r0
  float v7; // s0
  int v8; // r0
  float v9; // r0
  int v10; // r1
  int *v11; // r0
  bool v12; // zf
  int v13; // r6
  int v14; // r7
  float v15; // s0
  float v16; // r0

  v3 = *((_DWORD *)a1 + 119);
  if ( v3 != -1 )
    a2 = v3;
  *((_DWORD *)a1 + 118) = a2;
  (*(void (__fastcall **)(float *, _DWORD))(*(_DWORD *)a1 + 212))(a1, dword_60B0C230[a2]);
  v4 = *((_DWORD *)a1 + 75);
  v5 = 0;
  if ( v4 >= 6 )
    v4 = 0;
  v6 = &a1[v4];
  a1[6] = v6[60];
  a1[73] = v6[66];
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 260))(a1);
  sub_6078E7F0(a1);
  v7 = (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 220))(a1);
  a1[129] = v7;
  a1[130] = v7;
  a1[131] = v7;
  a1[120] = 0.0;
  v8 = *((_DWORD *)a1 + 118);
  if ( v8 == 6 )
  {
    v9 = *a1;
    v10 = 3;
  }
  else
  {
    v12 = v8 == 2;
    v9 = *a1;
    if ( v12 )
      v10 = 2;
    else
      v10 = 1;
  }
  (*(void (__fastcall **)(float *, int, _DWORD))(LODWORD(v9) + 176))(a1, v10, 0);
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 228))(a1);
  if ( *((_DWORD *)a1 + 43) )
  {
    a1[43] = 0.0;
    (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 32))(a1);
  }
  v11 = *((int **)a1 + 73);
  v12 = v11 == 0;
  if ( v11 )
  {
    v5 = *v11;
    v12 = *v11 == 0;
  }
  if ( !v12 )
  {
    v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 120))(v5);
    if ( v13 >= 1 )
    {
      v14 = 0;
      do
      {
        if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 132))(v5, v14) )
          (*(void (__fastcall **)(float *, int, float))(*(_DWORD *)a1 + 248))(a1, v14, 1.0);
        ++v14;
      }
      while ( v13 != v14 );
    }
  }
  v15 = a1[133];
  v16 = *a1;
  if ( *((_DWORD *)a1 + 132) )
  {
    (*(void (__fastcall **)(float *, float))(LODWORD(v16) + 256))(a1, v15);
    (*(void (__fastcall **)(float *, float))(*(_DWORD *)a1 + 252))(a1, 0.0);
  }
  else
  {
    (*(void (__fastcall **)(float *, float))(LODWORD(v16) + 252))(a1, v15);
    (*(void (__fastcall **)(float *, float))(*(_DWORD *)a1 + 256))(a1, 0.0);
  }
  return (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 56))(a1);
}
