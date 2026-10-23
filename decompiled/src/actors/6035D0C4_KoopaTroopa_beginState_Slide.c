/* KoopaTroopa_beginState_Slide
 * address: 0x6035D0C4   size: 164   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall KoopaTroopa_beginState_Slide(Enemy *a1)
{
  float v2; // s0
  bool v3; // zf
  unsigned int playerId; // r0

  ShellEnemy__vf310((int)a1);
  v2 = FIELD_F32(a1, 0x27C);
  v3 = v2 == 0.0;
  if ( v2 != 0.0 )
    v3 = (FIELD_U32(a1, 0x18) & 0x10) == 0;
  if ( !v3 && Actor__getProfileId(&FIELD_U32(a1, 0x0)) == 512 )
  {
    if ( FIELD_U8(dword_60CC6D8C, 17) )
    {
      playerId = FIELD_U8(a1, 0x54);
      if ( playerId <= 3 && (float)((float)byte_60AFE3F4[FIELD_U32(a1, 0x50)] * FIELD_F32(a1, 0x27C)) > 0.0 )
        *(&FIELD_U32(a1, 0x17FC) + playerId) = 24;
    }
  }
}
