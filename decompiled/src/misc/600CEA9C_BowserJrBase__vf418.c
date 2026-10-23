/* BowserJrBase__vf418
 * address: 0x600CEA9C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BowserJrBase__vf418(int result)
{
  float v1; // s2

  v1 = (float)(FIELD_F32(result, 7220)
             + (float)((float)((float)(FIELD_F32(result, 7212) * 24.0) + (float)(FIELD_F32(result, 7208) * 0.0))
                     + (float)(FIELD_F32(result, 7216) * 0.0)))
     - FIELD_F32(result, 112);
  FIELD_F32(result, 6836) = (float)(FIELD_F32(result, 7204)
                                    + (float)((float)((float)(FIELD_F32(result, 7196) * 24.0)
                                                    + (float)(FIELD_F32(result, 7192) * 0.0))
                                            + (float)(FIELD_F32(result, 7200) * 0.0)))
                            - FIELD_F32(result, 108);
  FIELD_F32(result, 6840) = v1;
  FIELD_U32(result, 6844) = 1097859072;
  FIELD_U32(result, 6848) = 1094713344;
  return result;
}
