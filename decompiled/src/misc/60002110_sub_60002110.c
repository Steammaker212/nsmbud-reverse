/* sub_60002110
 * address: 0x60002110   size: 852   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60002110(int a1, int a2)
{
  int v4; // r4
  int v5; // r3
  int v6; // r0
  int v7; // r1
  int v8; // r2
  bool v9; // zf
  int v10; // r0
  char v11; // r12
  int v12; // r6
  int (__fastcall ***v13)(_DWORD, int *); // r7
  int v14; // r2
  float v15; // r1
  int v16; // r0
  TileCheck *v17; // r0
  char v18; // r12
  int (__fastcall ***v19)(_DWORD, int *); // r4
  int v20; // r9
  int v21; // r0
  int v22; // r2
  char v23; // r12
  int (__fastcall ***v24)(_DWORD, int *); // r10
  int v25; // r0
  char v26; // r12
  int (__fastcall ***v27)(_DWORD, int *); // r5
  bool v28; // zf
  TileCheck v30; // [sp+4h] [bp-84h] BYREF
  _BYTE v31[8]; // [sp+50h] [bp-38h] BYREF
  int v32; // [sp+58h] [bp-30h]
  float v33; // [sp+60h] [bp-28h] BYREF
  float v34; // [sp+64h] [bp-24h]

  v4 = 0;
  v5 = FIELD_U32(a2, 2224);
  v6 = v5 & 0x10000001;
  if ( (v5 & 0x10000001) != 1 )
    v6 = 0;
  v7 = v5 & 0x440000;
  if ( (v5 & 0x440000) != 0 )
    v7 = 1;
  v8 = v5 & 0x880000;
  if ( (v5 & 0x880000) != 0 )
    v8 = 1;
  v9 = (v5 & 0x20000000) == 0;
  if ( (v5 & 0x20000000) == 0 )
    v9 = (v7 & v6 & v8) == 1;
  if ( v9 )
  {
    v10 = sub_6014B6F8(a2);
    v12 = v10;
    if ( v10 )
    {
      v13 = *(int (__fastcall ****)(_DWORD, int *))(v10 + 144);
      if ( ((unsigned int)&dword_60C7B39C & ~(1610621312 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
      {
        dword_60C7B398 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C7B39C);
      }
      if ( v13 && (**v13)(v13, &dword_60C7B398) )
      {
LABEL_34:
        v20 = 0;
        v21 = sub_6014B758(a2, 0, v14);
        v4 = 0;
        if ( v21 )
        {
          v24 = *(int (__fastcall ****)(_DWORD, int *))(v21 + 144);
          if ( ((unsigned int)&dword_60C7B39C & ~(1610621756 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
          {
            dword_60C7B398 = (int)&off_60BC00E0;
            _cxa_guard_release(&dword_60C7B39C);
          }
          v4 = 0;
          if ( v24 )
          {
            v4 = (**v24)(v24, &dword_60C7B398);
            if ( v4 )
              v4 = (int)v24;
          }
        }
        v25 = sub_6014B758(a2, 1, v22);
        if ( v25 )
        {
          v27 = *(int (__fastcall ****)(_DWORD, int *))(v25 + 144);
          if ( ((unsigned int)&dword_60C7B39C & ~(1610621904 << v26) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
          {
            dword_60C7B398 = (int)&off_60BC00E0;
            _cxa_guard_release(&dword_60C7B39C);
          }
          if ( v27 )
          {
            v20 = (**v27)(v27, &dword_60C7B398);
            if ( v20 )
              v20 = (int)v27;
          }
        }
        v28 = v13 == (int (__fastcall ***)(_DWORD, int *))v4;
        if ( v13 != (int (__fastcall ***)(_DWORD, int *))v4 )
        {
          v4 = 0;
          v28 = v13 == (int (__fastcall ***)(_DWORD, int *))v20;
        }
        if ( v28 )
        {
          sub_60001F90(a1, v12);
          return 1;
        }
        return v4;
      }
    }
    v15 = FIELD_F32(a1, 112);
    v33 = FIELD_F32(a1, 108);
    v34 = v15;
    if ( FIELD_U8(a2, 2343) )
    {
      if ( FIELD_U8(a2, 2347) )
        goto LABEL_23;
      v16 = 2380;
    }
    else
    {
      if ( !FIELD_U8(a2, 2351) )
        goto LABEL_23;
      v16 = 2428;
    }
    sub_60153134(a2 + v16, &v30);
    v33 = *(float *)&v30.field_0 + v33;
    v34 = v34 + (float)(*(float *)&v30.field_4 * 0.75);
LABEL_23:
    v17 = sub_6015D0AC(&v30);
    if ( sub_6015DD58(v17, v31, &v33) != 1 )
      return v4;
    v12 = v32;
    if ( !v32 || FIELD_U32(v32, 300) != 31 )
      return v4;
    v19 = *(int (__fastcall ****)(_DWORD, int *))(v32 + 144);
    if ( ((unsigned int)&dword_60C7B39C & ~(1610621596 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
    {
      dword_60C7B398 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C7B39C);
    }
    if ( v19 )
    {
      v13 = (int (__fastcall ***)(_DWORD, int *))(**v19)(v19, &dword_60C7B398);
      if ( v13 )
        v13 = v19;
    }
    else
    {
      v13 = 0;
    }
    goto LABEL_34;
  }
  return v4;
}
