/* mapPositionToScreen
 * address: 0x600243B4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Vec2 *__fastcall mapPositionToScreen(Vec2 *out, Vec3 *position)
{
  float v2; // s2

  v2 = (float)((float)(FIELD_F32(position, 0x4) - FIELD_F32(dword_60CC6484, 128))
             + (float)(FIELD_F32(position, 0x4) - FIELD_F32(dword_60CC6484, 128)))
     / FIELD_F32(dword_60CC6484, 108);
  FIELD_F32(out, 0x0) = (float)((float)(FIELD_F32(position, 0x0) - FIELD_F32(dword_60CC6484, 116))
                 + (float)(FIELD_F32(position, 0x0) - FIELD_F32(dword_60CC6484, 116)))
         / FIELD_F32(dword_60CC6484, 104);
  FIELD_F32(out, 0x4) = v2;
  return out;
}
