/* sub_607CDC8C
 * address: 0x607CDC8C   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CDC8C(int a1, int a2, int a3)
{
  int v5; // r0
  int v7; // r4
  unsigned int v8; // r1
  int v9; // r7
  char v10; // r12

  v5 = 0;
  v7 = 0;
  v8 = FIELD_U8(a1, 84);
  if ( v8 < 4 )
    v5 = (char)v8;
  if ( a2 )
  {
    v9 = *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 32);
    if ( v9 )
    {
      v7 = 1;
      if ( (*(int (__fastcall **)(_DWORD, int, int))(*(_DWORD *)v9 + 1172))(
             *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 32),
             a2,
             5) == 1 )
      {
        sub_60765948(v9, a2, 10);
        if ( ((unsigned int)&dword_60C7B374 & ~(1618795804 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B370) == 1 )
        {
          AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, FIELD_S8(a2, 84), 4, 0, 0);
          if ( SE_VOC_YS_YOSHI_ref_2(a1, a2, 0) == 1 )
          {
            v7 = 1;
            FIELD_U32(a2, 80) = FIELD_U32(a1, 80);
            (*(void (__fastcall **)(int, int, int, _DWORD, float, float))(*(_DWORD *)a1 + 748))(
              a1,
              1,
              2,
              0,
              3.628,
              FIELD_F32(a1, 88));
          }
        }
        else if ( a3 == 7 )
        {
          nullsub_43();
        }
      }
    }
  }
  return v7;
}
