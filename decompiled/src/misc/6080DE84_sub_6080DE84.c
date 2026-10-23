/* sub_6080DE84
 * address: 0x6080DE84   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080DE84(float a1, int a2, int a3, int a4)
{
  float v7; // s18
  float v8; // s0
  int v9; // r0
  int v10; // r1
  float v11; // s18
  float v12; // s0
  _DWORD v14[11]; // [sp+4h] [bp-2Ch] BYREF

  sub_608A8604(v14, SoundSystem_instance + 64);
  if ( a1 < 0.0 || a1 >= 0.6 )
  {
    if ( a1 < 0.6 || a1 > 1.0 )
    {
      v9 = v14[0];
      if ( v14[0] )
      {
        v10 = 0xFFFF;
        goto LABEL_19;
      }
    }
    else
    {
      v11 = 0.0;
      v12 = sub_6080E4E0(a1, 0.6, 1.0, 0.0, 1.0);
      if ( v12 >= 0.0 )
      {
        v11 = v12;
        if ( v12 > 1.0 )
          v11 = 1.0;
      }
      if ( v14[0] )
      {
        sub_608B7240(v14[0], a4, v11);
        v9 = v14[0];
        if ( v14[0] )
        {
          v10 = ~a4;
          goto LABEL_19;
        }
      }
    }
  }
  else
  {
    v7 = 0.0;
    v8 = sub_6080E4E0(a1, 0.0, 0.6, 1.0, 0.0);
    if ( v8 >= 0.0 )
    {
      v7 = v8;
      if ( v8 > 1.0 )
        v7 = 1.0;
    }
    if ( v14[0] )
    {
      sub_608B7240(v14[0], a3, v7);
      v9 = v14[0];
      if ( v14[0] )
      {
        v10 = ~a3;
LABEL_19:
        sub_608B7240(v9, v10, 0.0);
      }
    }
  }
  return sub_608A86F0(v14);
}
