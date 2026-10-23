/* sub_605B7070
 * address: 0x605B7070   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B7070(int a1)
{
  _BOOL4 v2; // r1
  int result; // r0
  int v4; // r5
  int v5; // r6
  int ResArchiveById; // r0

  v2 = sub_604092B0(dword_60C9A1F0, FIELD_U32(a1, 20) & 0xF);
  result = 2;
  if ( v2 )
  {
    v4 = (FIELD_U32(a1, 24) & 0x1F) + 1;
    v5 = ((FIELD_U32(a1, 24) >> 8) & 3) + 1;
    FIELD_U32(a1, 492) = 1103101952;
    FIELD_U32(a1, 496) = -1015545856;
    FIELD_U32(a1, 580) = 0;
    FIELD_F32(a1, 572) = (float)(unsigned int)v5 * 8.0;
    FIELD_F32(a1, 576) = (float)(unsigned int)v4 * -8.0;
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    sub_605B774C(a1 + 644, ResArchiveById, v5, v4);
    return 1;
  }
  return result;
}
