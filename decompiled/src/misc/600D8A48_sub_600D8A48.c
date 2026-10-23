/* sub_600D8A48
 * address: 0x600D8A48   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600D8A48(int a1)
{
  char v1; // r12
  int v2; // r4
  unsigned int v3; // r1
  float *v4; // r5
  unsigned int v5; // r1

  v2 = 0;
  v3 = FIELD_U32(a1, 7124);
  if ( v3 >= 4 )
    v3 = 0;
  v4 = *(float **)(PlayerMgr_instance + 4 * v3 + 32);
  if ( v4 )
  {
    v5 = FIELD_U32(a1, 7136);
    if ( v5 )
      v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v5);
    if ( ((unsigned int)dword_60C81F18 & ~(1611500216 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
    {
      dword_60C81F14 = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C81F18);
    }
    if ( v2 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C81F14) == 1 )
        (*(void (__fastcall **)(int, float, float, float))(*(_DWORD *)v2 + 240))(
          v2,
          v4[27] + v4[143],
          v4[28] + v4[144],
          v4[29] + v4[145]);
    }
  }
}
