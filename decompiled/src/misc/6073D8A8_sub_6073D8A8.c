/* sub_6073D8A8
 * address: 0x6073D8A8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6073D8A8(int a1)
{
  float v1; // s16
  unsigned int v2; // r1
  unsigned int *v3; // r4
  int (__fastcall ***v4)(_DWORD, int *); // r5
  char v5; // r12
  int (__fastcall ***v6)(_DWORD, int *); // r4
  char v7; // r12
  int v8; // r5

  v1 = 0.0;
  v3 = (unsigned int *)(a1 + 8092);
  v2 = FIELD_U32(a1, 8092);
  if ( v2 )
  {
    v4 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( ((unsigned int)&dword_60CBDBDC & ~(1618204916 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDBDC) )
    {
      dword_60CBDBD8 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60CBDBDC);
    }
    if ( v4 && (**v4)(v4, &dword_60CBDBD8) == 1 )
    {
      v6 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, *v3);
      if ( ((unsigned int)&dword_60CBDBDC & ~(1618205064 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDBDC) )
      {
        dword_60CBDBD8 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60CBDBDC);
      }
      v8 = (int)(v6 + 27);
      if ( !(**v6)(v6, &dword_60CBDBD8) )
        v8 = 108;
      return *(float *)v8;
    }
  }
  return v1;
}
