/* sub_600FFD78
 * address: 0x600FFD78   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600FFD78(int a1, int a2)
{
  char v2; // r12
  float *v5; // r4
  int v6; // r6
  char v7; // r12
  bool v8; // zf
  int v9; // r5
  bool v10; // zf
  int ProfileId; // r0
  float v12; // s0
  float v13; // s2

  v5 = *(float **)(a1 + 64);
  if ( ((unsigned int)&dword_60C8110C & ~(1611660696 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8110C) )
  {
    dword_60C81108 = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C8110C);
  }
  if ( v5 )
  {
    v6 = (**(int (__fastcall ***)(float *, int *))v5)(v5, &dword_60C81108);
    if ( v6 )
      v6 = (int)v5;
    v8 = v6 == 0;
    if ( v6 )
    {
      v5 = *(float **)(a2 + 64);
      v8 = v5 == 0;
    }
    if ( !v8 )
    {
      v9 = *((unsigned __int8 *)v5 + 533);
      if ( v9 == 1 )
      {
        if ( ((unsigned int)&dword_60C7B374 & ~(1611660844 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( (**(int (__fastcall ***)(float *, int *))v5)(v5, &dword_60C7B370) == 1 )
        {
          v10 = ((_BYTE)v5[1725] & 1) == 0;
          if ( ((_BYTE)v5[1725] & 1) == 0 )
            v10 = (*((_BYTE *)v5 + 1217) & 0x10) == 0;
          if ( !v10 )
          {
            if ( !(*(int (__fastcall **)(float *))(*(_DWORD *)v5 + 1156))(v5) )
            {
              FIELD_U32(v6, 9436) = *((char *)v5 + 84);
              FIELD_U32(v6, 9440) = 60;
              if ( (*(int (__fastcall **)(float *, _DWORD, _DWORD))(*(_DWORD *)v5 + 1172))(v5, FIELD_U32(a1, 64), 0) == 1 )
                FIELD_U8(a2, 110) |= 2u;
            }
            sub_607A2628(v5, v5[27] < FIELD_F32(v6, 108), 2.0, 0.0);
          }
        }
        v9 = *((unsigned __int8 *)v5 + 533);
      }
      ProfileId = Actor__getProfileId((Actor *)v5);
      if ( v9 == 3 )
      {
        if ( ProfileId == 528 )
        {
          v12 = v5[27];
          v13 = FIELD_F32(v6, 108);
          *((_DWORD *)v5 + 136) = 8;
          *((_DWORD *)v5 + 137) = v13 > v12;
        }
      }
      else if ( ProfileId == 392 )
      {
        sub_602EE7B8(v5, *((_DWORD *)v5 + 20), -1);
      }
    }
  }
}
