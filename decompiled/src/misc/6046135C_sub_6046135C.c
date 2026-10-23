/* sub_6046135C
 * address: 0x6046135C   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6046135C(int a1)
{
  int v2; // s2
  unsigned int v3; // r0
  int v4; // s0
  int *v5; // r1

  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, 0, 0, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 228))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 232))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 236))(a1);
  FIELD_U32(a1, 3200) |= 0x20000u;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 220))(a1);
  FIELD_U32(a1, 6444) = a1 + 6820;
  FIELD_F64(a1, 6304) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6300))(a1 + 6300);
  FIELD_U32(a1, 6312) = v2;
  v3 = FIELD_U32(a1, 20);
  if ( FIELD_U8(a1, 86) == 1 )
  {
    v4 = -987594752;
  }
  else
  {
    v5 = dword_60461590;
    if ( (v3 & 0x4000) != 0 )
      v5 = &dword_60461590[1];
    v4 = *v5;
  }
  FIELD_U32(a1, 116) = v4;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 80) = v3 >> 31;
  FIELD_U32(a1, 6216) = (v3 >> 22) & 3;
  FIELD_U32(a1, 6184) = HIWORD(v3) & 3;
  FIELD_U32(a1, 6796) = (v3 >> 20) & 3;
  if ( (v3 & 0x800) != 0 )
  {
    FIELD_U8(a1, 6258) = 1;
    FIELD_U32(a1, 6236) = 660;
    FIELD_U32(a1, 6240) = 4;
    FIELD_U16(a1, 6248) = 0;
  }
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1098907648;
  FIELD_U32(a1, 500) = 1107296256;
  FIELD_U32(a1, 504) = 1107296256;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  FIELD_U32(a1, 516) = 1140850688;
  FIELD_U32(a1, 520) = 1140850688;
  FIELD_U32(a1, 620) = a1 + 6260;
  FIELD_U32(a1, 524) = 1149239296;
  FIELD_U32(a1, 528) = 1149239296;
  FIELD_U32(a1, 6276) = 1;
  FIELD_U32(a1, 6188) = (FIELD_U32(a1, 20) >> 12) & 3;
  FIELD_F32(a1, 6048) = -0.0625 * 0.5;
  FIELD_F32(a1, 6040) = 1.5 * 0.5;
  FIELD_F32(a1, 6044) = -1.5 * 0.5;
  return -1.5 * 0.5;
}
