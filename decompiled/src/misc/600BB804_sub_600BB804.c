/* sub_600BB804
 * address: 0x600BB804   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BB804(int result)
{
  unsigned int v1; // r1
  float v2; // s12

  v1 = FIELD_U32(result, 6140);
  v2 = FIELD_F32(result, 6156);
  FIELD_F32(result, 6144) = (float)((float)(FIELD_F32(result, 6116)
                                            - (float)((float)((float)((float)((float)((float)v1
                                                                                    * FIELD_F32(result, 6152))
                                                                            / 48.0)
                                                                    * 0.5)
                                                            * 48.0)
                                                    * 48.0))
                                    - (float)((float)v1 * (float)((float)v1 * (float)(FIELD_F32(result, 6152) * 0.5))))
                            / (float)v1;
  FIELD_F32(result, 6148) = (float)((float)(FIELD_F32(result, 6112)
                                            - (float)((float)((float)((float)((float)((float)v1 * v2) / 48.0) * 0.5)
                                                            * 48.0)
                                                    * 48.0))
                                    - (float)((float)v1 * (float)((float)v1 * (float)(v2 * 0.5))))
                            / (float)v1;
  FIELD_U32(result, 6164) = (0x80000000 - FIELD_U32(result, 6108)) / v1;
  FIELD_U32(result, 6168) = FIELD_U32(result, 6104) / v1;
  FIELD_U32(result, 6160) = 0x40000000 / v1;
  return result;
}
