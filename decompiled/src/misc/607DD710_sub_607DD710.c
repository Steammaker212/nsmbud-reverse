/* sub_607DD710
 * address: 0x607DD710   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DD710(int a1, float *a2, int a3)
{
  float v6; // s0
  float v7; // s0
  float v8; // s0

  v6 = a2[1];
  if ( v6 < 10.0 || v6 > 2505.1 )
    nn__diag__detail__OnAssertionFailure(2, &byte_60ABC94D, &byte_60ABC94D, &byte_60ABC94D, 0);
  v7 = a2[3];
  if ( v7 < 10.0 || v7 > 2505.1 )
    nn__diag__detail__OnAssertionFailure(2, &byte_60ABC94D, &byte_60ABC94D, &byte_60ABC94D, 0);
  if ( *a2 < 0.0 || *a2 > 1.0 )
    nn__diag__detail__OnAssertionFailure(2, &byte_60ABC94D, &byte_60ABC94D, &byte_60ABC94D, 0);
  v8 = a2[2];
  if ( v8 < 0.0 || v8 > 1.0 )
  {
    nn__diag__detail__OnAssertionFailure(2, &byte_60ABC94D, &byte_60ABC94D, &byte_60ABC94D, 0);
    v8 = a2[2];
  }
  return sub_607DD8A8(
           a1,
           (int)(float)(a2[1] * 1048600.0),
           (unsigned int)(float)(*a2 * 255.0),
           (int)(float)(a2[3] * 1048600.0),
           (unsigned int)(float)(v8 * 255.0),
           a3);
}
