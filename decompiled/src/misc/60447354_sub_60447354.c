/* sub_60447354
 * address: 0x60447354   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60447354(int a1)
{
  int v2; // r2
  _BYTE *v3; // r0
  _BYTE *v4; // r3

  v2 = 8;
  *(_QWORD *)a1 = (unsigned int)off_60BFB044;
  v3 = (_BYTE *)(a1 + 2472);
  do
  {
    *(_BYTE *)(a1 + v2) = 0;
    v4 = (_BYTE *)(a1 + v2);
    v2 += 112;
    v4[28] = 0;
    v4[56] = 0;
    v4[84] = 0;
  }
  while ( v4 + 112 != v3 );
  FIELD_U32(a1, 2472) = 0;
  FIELD_U16(a1, 2476) = 0;
  FIELD_U8(a1, 2480) = 4;
  FIELD_U8(a1, 2481) = 2;
  FIELD_U16(a1, 2504) = 0;
  FIELD_U16(a1, 2502) = 0;
  FIELD_U16(a1, 2500) = 0;
  FIELD_U16(a1, 2498) = 0;
  FIELD_U16(a1, 2496) = 0;
  FIELD_U16(a1, 2494) = 0;
  FIELD_U16(a1, 2492) = 0;
  FIELD_U16(a1, 2490) = 0;
  FIELD_U16(a1, 2488) = 0;
  FIELD_U16(a1, 2486) = 0;
  FIELD_U16(a1, 2484) = 0;
  FIELD_U16(a1, 2482) = 0;
  FIELD_U16(a1, 2506) = 0;
  FIELD_U32(a1, 2512) = a1 + 2520;
  FIELD_U32(a1, 2508) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 2516) = 128;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 2508);
  **(_BYTE **)(a1 + 2512) = 0;
  FIELD_U32(a1, 2508) = &off_60BD95A8;
  sub_609588DC(a1 + 2648, 14);
  return a1;
}
