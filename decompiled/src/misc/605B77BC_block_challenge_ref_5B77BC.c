/* block_challenge_ref_5B77BC
 * address: 0x605B77BC   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall block_challenge_ref_5B77BC(_DWORD *a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r10
  int v5; // r9
  int v6; // r0
  unsigned int v7; // r0
  void *v8; // r11
  void *v9; // r7
  void *Model2; // r6
  ModelWrapper *v11; // r4
  ModelWrapper *v12; // r0
  unsigned int v13; // r0
  unsigned int v14; // r1
  unsigned int v15; // r0
  unsigned int v16; // r0
  unsigned int v17; // r0
  sead__SafeString a2; // [sp+1Ch] [bp-2Ch] BYREF

  result = 1;
  if ( a1[174] < a1[170] )
  {
    v3 = a1[171];
    v4 = 0;
    if ( v3 >= 0 )
    {
      if ( (unsigned int)v3 >= 8 )
        v3 = 0;
      v4 = (int)&a1[5 * v3];
    }
    v5 = 0;
    while ( v5 <= 7 )
    {
      if ( !a1[172] )
      {
        v6 = a1[171];
        if ( v6 <= 6 )
        {
          v7 = v6 + 1;
          a1[171] = v7;
          if ( v7 >= 8 )
            v7 = 0;
          v4 = (int)&a1[5 * v7];
          sub_60002B50(v4);
        }
      }
      v8 = (void *)a1[40];
      ++v5;
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = "block_challenge";
      v9 = *(void **)(v4 + 16);
      Model2 = (void *)Resource_getModel2(v8, &a2, 0, 0, 0, 0, 0, 0, (int)v9);
      v11 = (ModelWrapper *)operator_new_8DE25C(0x30u, v9, 4);
      v12 = ModelWrapper_ctor(v11, Model2, 0, 0, 0, 0, 0);
      ModelWrapper_setup(v12, v8, 0, v9);
      v13 = a1[173];
      v14 = a1[174];
      if ( v13 >= 4 )
        v13 = 0;
      if ( v14 >= 0x20 )
        v14 = 0;
      a1[4 * v14 + 41 + v13] = v11;
      v15 = a1[172] + 1;
      if ( v15 > 0xF )
        v15 = 0;
      a1[172] = v15;
      v16 = a1[173] + 1;
      a1[173] = v16;
      if ( v16 >= a1[169] )
      {
        a1[173] = 0;
        v17 = a1[174] + 1;
        a1[174] = v17;
        if ( v17 >= a1[170] )
          return 1;
      }
    }
    return 0;
  }
  return result;
}
