/* sub_6079327C
 * address: 0x6079327C   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079327C(_DWORD *a1, int a2, float a3, float a4, float a5)
{
  int *v10; // r6
  char *v11; // r10
  char *v12; // r8
  int v13; // r0
  signed int v14; // r7
  bool v15; // cc
  int *v16; // r5
  float v18; // [sp+Ch] [bp-6Ch] BYREF
  int (**v19)(); // [sp+10h] [bp-68h] BYREF
  char *v20; // [sp+14h] [bp-64h]
  int v21; // [sp+18h] [bp-60h]
  char v22; // [sp+1Ch] [bp-5Ch] BYREF
  int v23; // [sp+3Ch] [bp-3Ch] BYREF

  a1[8] = a2;
  v10 = &dword_60CBFBC4[13 * a2];
  a1[50] = v10[12];
  v23 = a1[5];
  v20 = &v22;
  v19 = &BufferedSafeStringBase_char_vtable_probably;
  v21 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v19);
  v11 = v20;
  (*(void (__fastcall **)(int *))(dword_60CBFBC4[13 * a2] + 12))(v10);
  v12 = (char *)v10[1];
  if ( v11 != v12 )
  {
    (*(void (__fastcall **)(int *))(*v10 + 12))(v10);
    v13 = v10[1];
    v14 = 0;
    while ( *(_BYTE *)(v13 + v14) )
    {
      if ( !*(_BYTE *)(v13 + v14 + 1) )
      {
        ++v14;
        break;
      }
      if ( !*(_BYTE *)(v13 + v14 + 2) )
      {
        v14 += 2;
        break;
      }
      v15 = v14 + 2 < 0x80000;
      v14 += 3;
      if ( !v15 )
      {
        v14 = 0;
        break;
      }
    }
    if ( v14 >= v21 )
      v14 = v21 - 1;
    qmemcpy(v11, v12, v14);
    v11[v14] = 0;
  }
  v18 = a5;
  (*(void (__fastcall **)(_DWORD *, float *, int *, int (***)(), _DWORD, int))(*a1 + 36))(
    a1,
    &v18,
    &v23,
    &v19,
    a1[8],
    1);
  v16 = &dword_60CBFBC4[13 * a2];
  (*(void (__fastcall **)(_DWORD *, int, int (***)(), int, float, float, float))(*a1 + 48))(
    a1,
    v23,
    &v19,
    v16[8],
    a3,
    a4,
    v18);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 52))(a1);
  return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 32))(a1, v16[11]);
}
