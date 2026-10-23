/* sub_6070FAA0
 * address: 0x6070FAA0   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6070FAA0(int a1, unsigned int a2)
{
  char v2; // r12
  int v4; // r6
  unsigned int v5; // r2
  int v6; // r0
  int v7; // r5
  int v8; // r6
  _DWORD *v9; // r1

  v4 = 3;
  if ( a2 != 15 )
  {
    v5 = FIELD_U32(a1, 6168);
    if ( v5 )
    {
      if ( v5 > 3 )
      {
        v6 = 0;
        if ( v5 >= 6 )
        {
          v6 = 2;
          if ( v5 < 9 )
            v6 = 1;
        }
      }
      else
      {
        FIELD_U8(a1, 6180) = 1;
        v6 = 0;
      }
      v9 = &unk_60B09D1C;
LABEL_20:
      v4 = v9[v6];
      goto LABEL_21;
    }
    if ( a2 >= 4 )
      a2 = 0;
    v7 = *(_DWORD *)(PlayerMgr_instance + 4 * a2 + 48);
    if ( ((unsigned int)&dword_60C7B37C & ~(1618017036 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B378) == 1 )
    {
      v8 = FIELD_S8(v7, 1320);
      if ( sub_6075EE0C(v7) == 1 )
      {
        v6 = 5;
        if ( v8 == 9 )
          v6 = 4;
      }
      else
      {
        v6 = 0;
        if ( (unsigned int)(v8 - 1) <= 8 )
          v6 = dword_60B09D30[v8 - 1];
      }
      v9 = &unk_60B09D04;
      goto LABEL_20;
    }
  }
LABEL_21:
  FIELD_U32(a1, 6172) = v4;
  return 6172;
}
