/* sub_600F1664
 * address: 0x600F1664   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_600F1664(int a1)
{
  int v2; // r4
  int v3; // r0
  int *v4; // r1
  _BYTE *v5; // r5
  char v6; // r12
  ActorBuildInfo v8; // [sp+4h] [bp-3Ch] BYREF

  memset(&v8.settings2, 0, 40);
  v8.profile = Profile__get(0x2BAu);
  v2 = 0;
  v3 = FIELD_U32(a1, 8432);
  v8.settings1 = v3 != 1;
  v8.position.y = FIELD_F32(a1, 112);
  v8.position.z = FIELD_F32(a1, 116);
  v4 = dword_600F1798;
  if ( v3 == 1 )
    v4 = &dword_600F1798[1];
  v8.position.x = *(float *)v4 + FIELD_F32(dword_60CC6484, 116);
  v5 = ActorMgr__create((void *)ActorMgr__instance, &v8, 0);
  FIELD_U32(a1, 7136) = *((_DWORD *)v5 + 2);
  if ( ((unsigned int)dword_60C856D8 & ~(1611601696 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60C856D8) )
  {
    dword_60C856D4 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C856D8);
  }
  if ( v5 )
  {
    v2 = (**(int (__fastcall ***)(_BYTE *, int *))v5)(v5, &dword_60C856D4);
    if ( v2 )
      return v5;
  }
  return (_BYTE *)v2;
}
