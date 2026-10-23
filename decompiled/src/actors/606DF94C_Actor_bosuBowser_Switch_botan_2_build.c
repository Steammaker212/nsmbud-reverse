/* Actor_bosuBowser_Switch_botan_2_build
 * address: 0x606DF94C   size: 128   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_bosuBowser_Switch_botan_2_build(int a1)
{
  int v2; // r5

  v2 = operator_new(0x1BA0u);
  sub_606E064C(v2, a1);
  *(_DWORD *)v2 = off_60C1EFA8;
  FIELD_U16(v2, 6992) = 0;
  FIELD_U32(v2, 6988) = 0;
  FIELD_U32(v2, 6984) = 0;
  FIELD_U32(v2, 6980) = 0;
  FIELD_U32(v2, 6976) = 0;
  FIELD_U32(v2, 6972) = 0;
  LightSource__ctor((LightSource *)(v2 + 6996));
  FIELD_U32(v2, 116) = -1011941376;
  return v2;
}
