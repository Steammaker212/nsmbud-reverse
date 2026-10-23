/* sub_6031B048
 * address: 0x6031B048   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6031B048(unsigned int *a1)
{
  _DWORD *v2; // r4
  char v3; // r12

  sub_6000BB08(a1);
  v2 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1]);
  if ( ((unsigned int)dword_60C93780 & ~(1613869188 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C93780) )
  {
    dword_60C9377C = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C93780);
  }
  if ( v2 )
  {
    if ( (*(int (__fastcall **)(_DWORD *, int *))*v2)(v2, &dword_60C9377C) == 1 )
    {
      v2[1587] = (*(int (__fastcall **)(_DWORD *))(*v2 + 704))(v2);
      v2[1586] = (*(int (__fastcall **)(_DWORD *))(*v2 + 704))(v2);
      v2[1585] = (*(int (__fastcall **)(_DWORD *))(*v2 + 704))(v2);
      v2[1584] = (*(int (__fastcall **)(_DWORD *))(*v2 + 704))(v2);
      v2[30] = 0;
      v2[31] = 0;
      v2[32] = 0;
      v2[3147] = 4;
      (*(void (__fastcall **)(_DWORD *, int *))(*v2 + 192))(v2, &dword_60C9365C);
      (*(void (__fastcall **)(_DWORD *))(*v2 + 76))(v2);
    }
  }
}
