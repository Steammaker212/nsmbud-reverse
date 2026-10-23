/* sub_6097744C
 * address: 0x6097744C   size: 860   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097744C(int a1)
{
  int v2; // r3
  int v3; // r7

  Icon_CIRCLE_GREEN_ref((_DWORD *)a1);
  *(_DWORD *)a1 = off_60C5F400;
  FIELD_U32(a1, 28) = off_60C5F434;
  FIELD_U32(a1, 32) = off_60C5F444;
  FIELD_U32(a1, 68) = &off_60C5F470;
  FIELD_U32(a1, 204) = 0;
  FIELD_U32(a1, 208) = 0;
  FIELD_U32(a1, 212) = 0;
  FIELD_U32(a1, 216) = 0;
  agl_TextureSampler_ref(a1 + 224);
  agl_TextureData_ref(a1 + 568);
  v2 = 848;
  FIELD_U8(a1, 840) = 6;
  FIELD_U8(a1, 841) = 0;
  FIELD_U8(a1, 842) = 0;
  FIELD_U8(a1, 843) = 0;
  FIELD_U8(a1, 844) = -1;
  FIELD_U8(a1, 845) = -1;
  do
  {
    *(_BYTE *)(a1 + v2) = 0;
    v3 = a1 + v2;
    v2 += 92;
    FIELD_U8(v3, 3) = 0;
    FIELD_U32(v3, 8) = 0;
    FIELD_U32(v3, 12) = 0;
    FIELD_U32(v3, 16) = 0;
    FIELD_U32(v3, 20) = 1065353216;
    FIELD_U32(v3, 72) = -1082130432;
    FIELD_U32(v3, 76) = -1082130432;
    FIELD_U32(v3, 80) = -1082130432;
    FIELD_U32(v3, 84) = 1065353216;
    FIELD_U8(v3, 2) = 0;
    FIELD_U8(v3, 1) = 0;
    FIELD_U32(v3, 20) = 1065353216;
    FIELD_U32(v3, 8) = 0;
    FIELD_U32(v3, 12) = 0;
    FIELD_U32(v3, 16) = 0;
    FIELD_U32(v3, 36) = 1065353216;
    FIELD_U32(v3, 32) = 0;
    FIELD_U32(v3, 28) = 0;
    FIELD_U32(v3, 24) = 0;
    FIELD_U32(v3, 40) = 0;
    FIELD_U32(v3, 44) = 0;
    FIELD_U32(v3, 48) = 0;
    FIELD_U32(v3, 52) = 1065353216;
    FIELD_U32(v3, 56) = 0;
    FIELD_U32(v3, 60) = 0;
    FIELD_U32(v3, 64) = 0;
    FIELD_U32(v3, 68) = 1065353216;
  }
  while ( v3 + 92 != a1 + 1584 );
  FIELD_U32(a1, 1592) = 1065353216;
  FIELD_U32(a1, 1588) = 0;
  FIELD_U32(a1, 1584) = 0;
  FIELD_U32(a1, 1608) = 1065353216;
  FIELD_U32(a1, 1604) = 0;
  FIELD_U32(a1, 1600) = 0;
  FIELD_U32(a1, 1596) = 0;
  FIELD_U32(a1, 1612) = 0;
  FIELD_U32(a1, 1616) = 0;
  sub_60921340(a1 + 1624);
  FIELD_U32(a1, 1736) = 0;
  FIELD_U32(a1, 1732) = 0;
  FIELD_U32(a1, 1728) = 0;
  FIELD_U32(a1, 1724) = 0;
  FIELD_U32(a1, 1720) = 0;
  FIELD_U32(a1, 1740) = &off_60C5F47C;
  FIELD_U32(a1, 1744) = 0;
  FIELD_U32(a1, 1748) = 0;
  default_ref_9419C8((_DWORD *)(a1 + 1752));
  FIELD_U32(a1, 1752) = &off_60C5E01C;
  default_ref_9419C8((_DWORD *)(a1 + 1768));
  FIELD_U32(a1, 1768) = &off_60C5D848;
  default_ref_9419C8((_DWORD *)(a1 + 1784));
  FIELD_U32(a1, 1784) = &off_60C5D848;
  default_ref_9419C8((_DWORD *)(a1 + 1800));
  FIELD_U32(a1, 1800) = &off_60C5DC9C;
  default_ref_9419C8((_DWORD *)(a1 + 1816));
  FIELD_U32(a1, 1816) = &off_60C5DC9C;
  default_ref_9419C8((_DWORD *)(a1 + 1832));
  FIELD_U32(a1, 1832) = &off_60C5DC9C;
  default_ref_9419C8((_DWORD *)(a1 + 1848));
  FIELD_U32(a1, 1848) = &off_60C5DC9C;
  sub_60940650((_DWORD *)(a1 + 1864));
  FIELD_U32(a1, 1864) = off_60C5D7C4;
  FIELD_U32(a1, 1940) = 0;
  default_ref_9419C8((_DWORD *)(a1 + 1944));
  FIELD_U32(a1, 1944) = &off_60C5E01C;
  default_ref_9419C8((_DWORD *)(a1 + 1960));
  FIELD_U32(a1, 1960) = &off_60C5D898;
  FIELD_U32(a1, 1976) = a1 + 1984;
  FIELD_U32(a1, 1972) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 1980) = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 1972);
  **(_BYTE **)(a1 + 1976) = 0;
  FIELD_U32(a1, 1972) = &off_60BD4C20;
  default_ref_9419C8((_DWORD *)(a1 + 2016));
  FIELD_U32(a1, 2016) = &off_60C5D898;
  FIELD_U32(a1, 2032) = a1 + 2040;
  FIELD_U32(a1, 2028) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 2036) = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 2028);
  **(_BYTE **)(a1 + 2032) = 0;
  FIELD_U32(a1, 2028) = &off_60BD4C20;
  default_ref_9419C8((_DWORD *)(a1 + 2072));
  FIELD_U32(a1, 2072) = &off_60C5E01C;
  FIELD_U32(a1, 1940) = *(__int16 *)dword_60CD09C8;
  return a1;
}
