/* sub_6017B8A4
 * address: 0x6017B8A4   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6017B8A4(_DWORD *a1)
{
  int v1; // r10
  _DWORD *v2; // r5
  _DWORD *v3; // r4
  _DWORD *v4; // r4
  int i; // r5
  _DWORD *v6; // r7
  int v7; // r7
  _DWORD *v8; // r4
  _DWORD *v9; // r5
  int v10; // r11
  char *v11; // r5
  int v13; // [sp+10h] [bp-30h]
  _DWORD *v14; // [sp+14h] [bp-2Ch]
  _DWORD *v15; // [sp+14h] [bp-2Ch]

  v1 = 0;
  *a1 = &off_60BD4FE8;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  v14 = a1 + 257;
  do
  {
    v2 = &a1[v1];
    v2[12] = &a1[v1 + 14];
    v2[11] = &BufferedSafeStringBase_char_vtable_probably;
    v2[13] = 5;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&a1[v1 + 11]);
    *(_BYTE *)v2[12] = 0;
    v2[11] = &off_60BD4F38;
    sub_601836D8(&a1[v1 + 16]);
    sub_60183858(&a1[v1 + 56]);
    sub_60183858(&a1[v1 + 152]);
    v2[249] = v2 + 251;
    v2[248] = &BufferedSafeStringBase_char_vtable_probably;
    v2[250] = 10;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&a1[v1 + 248]);
    *(_BYTE *)v2[249] = 0;
    v2[248] = &off_60BD4F50;
    v2[255] = &v14[v1];
    v2[254] = &BufferedSafeStringBase_char_vtable_probably;
    v2[256] = 10;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&a1[v1 + 254]);
    *(_BYTE *)v2[255] = 0;
    v2[254] = &off_60BD4F50;
    v2[261] = &v14[v1 + 6];
    v2[260] = &BufferedSafeStringBase_char_vtable_probably;
    v3 = &a1[v1 + 260];
    v2[262] = 10;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v3);
    *(_BYTE *)a1[v1 + 261] = 0;
    *v3 = &off_60BD4F50;
    v3[6] = &BufferedSafeStringBase_char_vtable_probably;
    v3[7] = &v14[v1 + 12];
    v3[8] = 10;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v14[v1 + 9]);
    *(_BYTE *)v3[7] = 0;
    v3[6] = &off_60BD4F50;
    v1 += 274;
  }
  while ( v1 != 70144 );
  v4 = a1 + 70157;
  for ( i = 0; i != 2048; i += 8 )
  {
    v6 = &v4[i];
    *(v6 - 2) = &BufferedSafeStringBase_char_vtable_probably;
    *(v6 - 1) = &v4[i + 1];
    v4[i] = 10;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v4[i - 2]);
    *(_BYTE *)*(v6 - 1) = 0;
    *(v6 - 2) = &off_60BD4F50;
  }
  v7 = 0;
  v8 = a1 + 72211;
  v9 = a1 + 72203;
  do
  {
    *v9 = &BufferedSafeStringBase_char_vtable_probably;
    v9[1] = v9 + 3;
    v9[2] = 10;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v9);
    v10 = 800;
    *(_BYTE *)v9[1] = 0;
    v15 = v9;
    *v9 = &off_60BD4F50;
    v13 = v7;
    do
    {
      v11 = (char *)v8 + v7;
      *((_DWORD *)v11 - 2) = &BufferedSafeStringBase_char_vtable_probably;
      *((_DWORD *)v11 - 1) = (char *)v8 + v7 + 4;
      *(_DWORD *)((char *)v8 + v7) = 5;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v8 + v7 - 8);
      v7 += 20;
      v10 -= 20;
      **((_BYTE **)v11 - 1) = 0;
      *((_DWORD *)v11 - 2) = &off_60BD4F38;
    }
    while ( v10 );
    v9 = v15 + 207;
    v7 = v13 + 828;
  }
  while ( v15 + 207 != a1 + 98699 );
  sub_6017BBCC(a1);
  return a1;
}
