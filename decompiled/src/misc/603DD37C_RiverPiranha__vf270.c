/* RiverPiranha__vf270
 * address: 0x603DD37C   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall RiverPiranha__vf270(int a1)
{
  unsigned int *v1; // r4
  _BYTE *v2; // r4
  char v3; // r12

  FIELD_U8(a1, 6661) = 1;
  FIELD_U32(a1, 6664) = 40;
  v1 = (unsigned int *)(a1 + 6340);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9935C);
  v2 = (_BYTE *)ActorMgrRelated_getById(ActorMgr__instance + 27168, *v1);
  if ( ((unsigned int)&dword_60C90E54 & ~(1614664676 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C90E54) )
  {
    dword_60C90E50 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C90E54);
  }
  if ( v2 && (**(int (__fastcall ***)(_BYTE *, int *))v2)(v2, &dword_60C90E50) == 1 )
  {
    v2[6299] = 1;
    (*(void (__fastcall **)(_BYTE *, int *))(*(_DWORD *)v2 + 192))(v2, &dword_60C90DD0);
  }
  return 1;
}
