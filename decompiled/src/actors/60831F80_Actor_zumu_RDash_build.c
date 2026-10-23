/* Actor_zumu_RDash_build
 * address: 0x60831F80   size: 192   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_zumu_RDash_build(ActorBuildInfo *a1)
{
  Actor *v2; // r4
  unsigned int settings1; // r0
  int v4; // r2
  _DWORD v6[9]; // [sp+4h] [bp-24h] BYREF

  v2 = (Actor *)operator_new(0x50u);
  Actor__ctor(v2, a1);
  FIELD_U32(v2, 0x0) = (int)off_60C2B0D4;
  settings1 = FIELD_U32(v2, 0x14);
  v4 = (settings1 >> 28) & 7;
  if ( v4 == 4 )
    v4 = 15;
  if ( v4 == 5 )
    v4 = 8;
  ((void (__fastcall *)(_DWORD *, unsigned int, int, unsigned int, float, float, float, float, _DWORD))loc_60803B24)(
    v6,
    HIBYTE(settings1) & 3,
    v4,
    HIWORD(settings1) & 1,
    FIELD_F32(a1, 0x10),
    FIELD_F32(a1, 0x10) + (float)((float)(unsigned __int8)settings1 * 16.0),
    FIELD_F32(a1, 0x14) + (float)((float)BYTE1(settings1) * 16.0),
    FIELD_F32(a1, 0x14),
    0);
  sub_607FC24C(dword_60CC6484, v6);
  FIELD_U8(v2, 0x13) = 1;
  return v2;
}
