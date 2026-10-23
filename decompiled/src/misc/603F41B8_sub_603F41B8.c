/* sub_603F41B8
 * address: 0x603F41B8   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F41B8(int a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r1
  bool v5; // zf
  int v6; // r0
  int v7; // [sp+4h] [bp-14h]

  FIELD_U8(a1, 1857) = 0;
  v2 = a1 + 1857;
  FIELD_U8(a1, 1860) = 0;
  FIELD_U8(a1, 1859) = 0;
  FIELD_U8(a1, 1858) = 0;
  v7 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 1844) + 8))(FIELD_U32(a1, 1844));
  if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v2 - 13) + 16))(*(_DWORD *)(v2 - 13)) == 1 )
    sub_60454DC4(dword_60C9CF0C);
  if ( dword_60CA83DC )
    sub_60511318();
  if ( dword_60CA7344 )
    nullsub_31();
  if ( dword_60C9F2CC )
    sub_604864CC();
  switch ( v7 )
  {
    case 1:
      FIELD_U32(a1, 1844) = 0;
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 1840) + 44))(FIELD_U32(a1, 1840));
      FIELD_U8(a1, 1856) = 1;
      FIELD_U32(a1, 1832) = 0;
      sub_604574C8(dword_60C9CF18, 1, 0);
      result = dword_60CA1910;
      if ( dword_60CA1910 )
        FIELD_U8(dword_60CA1910, 38089) = 0;
      return result;
    case 2:
      FIELD_U32(dword_60CC62E4, 108) = 131076;
      v4 = 0;
      goto LABEL_21;
    case 4:
      v5 = dword_60C9CF0C == 0;
      if ( dword_60C9CF0C )
        v5 = FIELD_U32(dword_60C9CF0C, 1396) == -1;
      if ( !v5 )
        return sub_60453AA8();
      FIELD_U32(dword_60CC62E4, 108) = 131074;
      FIELD_U32(dword_60CC6D78, 32) = 1;
      FIELD_U32(a1, 1832) = 3;
      FIELD_U8(a1, 1862) = 1;
      sub_604574C8(dword_60C9CF18, 3, 0);
      return sub_60456EF8(dword_60C9CF18);
    case 7:
      v4 = 4;
LABEL_21:
      FIELD_U32(dword_60CC6D78, 32) = v4;
      FIELD_U32(a1, 1832) = 3;
      FIELD_U8(a1, 1862) = 1;
      return 1;
    case 8:
      FIELD_U8(a1, 1875) = 1;
      FIELD_U32(a1, 1844) = 0;
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 1840) + 44))(FIELD_U32(a1, 1840));
      FIELD_U8(a1, 1856) = 1;
      FIELD_U32(a1, 1832) = 0;
      return sub_604574C8(dword_60C9CF18, 1, 0);
    case 9:
      v6 = dword_60CC6D78;
      FIELD_U32(dword_60CC6D78, 32) = 2;
      FIELD_U32(v6, 36) = 0;
      result = 3;
      goto LABEL_25;
    case 10:
      FIELD_U32(dword_60CC6D78, 32) = 3;
      result = 2;
LABEL_25:
      FIELD_U32(a1, 1832) = result;
      break;
    default:
      result = sub_60238B84(dword_60C8D9DC, 1);
      break;
  }
  return result;
}
