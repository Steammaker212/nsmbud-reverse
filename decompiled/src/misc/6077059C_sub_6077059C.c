/* sub_6077059C
 * address: 0x6077059C   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6077059C(int a1)
{
  _BYTE *v2; // r5
  char v3; // r12
  int v4; // r0
  bool v5; // zf
  float v6; // s2
  float v7; // r1
  float v8; // s6
  _BOOL4 v9; // r0
  char v10; // r12
  bool v11; // zf
  float v12[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( (FIELD_U8(a1, 1209) & 2) != 0 )
  {
    v2 = (_BYTE *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 9952));
    if ( ((unsigned int)&dword_60C7B37C & ~(1618413032 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v2 && (**(int (__fastcall ***)(_BYTE *, int *))v2)(v2, &dword_60C7B378) == 1 )
    {
      v4 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v2 + 636))(v2);
      v5 = v4 == 0;
      if ( !v4 )
        v5 = (v2[1238] & 1) == 0;
      if ( v5 )
      {
        if ( (*(int (__fastcall **)(_BYTE *, float *))(*(_DWORD *)v2 + 224))(v2, v12) == 1 )
          goto LABEL_12;
        v9 = sub_6075EDF8(a1);
        v11 = v9;
        if ( v9 )
          v11 = v2[533] == 2;
        if ( v11 )
        {
          if ( ((unsigned int)&dword_60C7B408 & ~(1618413304 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
          {
            dword_60C7B404 = (int)&off_60BC00B0;
            _cxa_guard_release(&dword_60C7B408);
          }
          if ( (**(int (__fastcall ***)(_BYTE *, int *))v2)(v2, &dword_60C7B404) == 1 && sub_607CE020(v2, v12) == 1 )
          {
LABEL_12:
            v6 = v12[2];
            v7 = v12[1];
            v8 = FIELD_F32(a1, 10000);
            FIELD_F32(a1, 108) = v12[0] + FIELD_F32(a1, 9992);
            FIELD_F32(a1, 112) = v7;
            FIELD_F32(a1, 116) = v6 + v8;
          }
        }
      }
    }
  }
}
