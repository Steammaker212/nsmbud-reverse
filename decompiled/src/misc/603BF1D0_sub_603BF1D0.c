/* sub_603BF1D0
 * address: 0x603BF1D0   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603BF1D0(int a1, int a2, int a3)
{
  char v3; // r12
  Actor *v5; // r7
  int v6; // r4
  _BYTE *v7; // r5
  int v8; // r6
  bool v9; // zf
  float v10; // s18
  float v11; // s16
  int v12; // r9
  int v13; // r10
  float v14; // s20
  int v15; // r0
  float v16; // s0
  float v17; // s0
  float v18; // s0

  v5 = *(Actor **)(a3 + 64);
  v6 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C86B40 & ~(1614541300 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B40) )
  {
    dword_60C86B3C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C86B40);
  }
  if ( v6 )
  {
    v7 = (_BYTE *)(**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C86B3C);
    if ( v7 )
      v7 = (_BYTE *)v6;
  }
  else
  {
    v7 = 0;
  }
  if ( ((unsigned int)&dword_60C86B40 & ~(1614541428 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B40) )
  {
    dword_60C86B3C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C86B40);
  }
  if ( v5 )
  {
    v8 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v5, 0x0))(v5, &dword_60C86B3C);
    if ( v8 )
      v8 = (int)v5;
    v9 = v7 == 0;
    if ( v7 )
      v9 = v8 == 0;
    if ( !v9 )
    {
      Actor__getProfileId((Actor *)v6);
      if ( Actor__getProfileId(v5) == 816 )
      {
        v10 = FIELD_F32(a2, 268);
        v11 = FIELD_F32(a2, 204);
        v7[6673] = 1;
        v7[6675] = 1;
        v12 = FIELD_U32(v8, 80);
        v13 = *((_DWORD *)v7 + 20);
        v14 = FIELD_F32(a2, 88) - FIELD_F32(v6, 112);
        v15 = (v10 <= 0.0) | (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v7 + 652))(v7);
        if ( (v13 | 1) == 1 )
        {
          if ( v15 == 1 )
          {
            if ( fabsf(v14) < 0.7 && (v12 | 1) == 3 )
              return;
            v16 = FIELD_F32(v6, 112);
            if ( fabsf(v10) >= 1.0 )
              FIELD_F32(v6, 112) = v16 + (float)(v10 * 0.3);
            else
              FIELD_F32(v6, 112) = v10 + v16;
          }
        }
        else if ( v15 == 1 )
        {
          if ( fabsf(v14) > 0.7 && (v12 | 1) == 1 )
            return;
          v17 = FIELD_F32(v6, 108);
          if ( fabsf(v11) >= 1.0 )
            v18 = v17 + (float)(v11 * 0.3);
          else
            v18 = v11 + v17;
          FIELD_F32(v6, 108) = v18;
        }
        if ( !v7[6676] )
        {
          if ( v7[6677] )
          {
            (*(void (__fastcall **)(_BYTE *, _BYTE *, int))(*(_DWORD *)v7 + 636))(v7, v7, v8);
            FIELD_U8(v8, 6677) = 0;
          }
        }
      }
    }
  }
}
