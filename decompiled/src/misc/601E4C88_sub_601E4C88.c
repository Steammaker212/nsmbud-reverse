/* sub_601E4C88
 * address: 0x601E4C88   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E4C88(_DWORD *a1, int a2, _DWORD *a3)
{
  const char *v6; // r4
  int result; // r0
  bool v8; // cf
  int v9; // r6
  __int64 *v10; // r3
  int v11; // r5
  int v12; // r5
  __int64 v13; // [sp+0h] [bp-38h] BYREF
  char v14; // [sp+8h] [bp-30h]
  _DWORD v15[3]; // [sp+Ch] [bp-2Ch] BYREF
  double v16[4]; // [sp+18h] [bp-20h] BYREF

  v6 = sub_601E3508((int)a1, a2);
  v15[0] = *a3;
  v15[1] = a3[1];
  v15[2] = a3[2];
  result = a2 - 16;
  v8 = (unsigned int)(a2 - 16) >= 0xD;
  if ( (unsigned int)(a2 - 16) >= 0xD )
  {
    result = a2 - 1;
    v8 = (unsigned int)(a2 - 1) >= 0xD;
  }
  if ( v8 && v6 )
  {
    if ( (unsigned int)(a2 - 31) >= 0x66 )
    {
      if ( (unsigned int)(a2 - 135) >= 0x26 )
      {
        if ( (unsigned int)(a2 - 175) >= 0x25 )
        {
          result = a2 - 214;
          if ( (unsigned int)(a2 - 214) >= 0x11 )
          {
            result = a2 - 233;
            if ( (unsigned int)(a2 - 233) < 4 )
              return sub_608091A4(SoundSystem_instance, v6);
          }
        }
        else
        {
          v12 = a1[2];
          sub_60024460((double *)&v13, (int)v15);
          return BasicSoundActor1_playSound(v12, v6, (int)&v13, 0);
        }
      }
      else
      {
        v11 = a1[1];
        sub_60024460((double *)&v13, (int)v15);
        return sub_60813570(v11, v6, &v13, 0);
      }
    }
    else
    {
      v13 = 15;
      v14 = 0;
      v9 = a1[3];
      sub_60024460(v16, (int)v15);
      v10 = &v13;
      if ( (unsigned int)(a2 - 73) >= 7 )
        v10 = 0;
      return BasicSoundActor2_play(v9, v6, (float *)v16, (int)v10);
    }
  }
  return result;
}
