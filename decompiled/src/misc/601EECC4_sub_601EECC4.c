/* sub_601EECC4
 * address: 0x601EECC4   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EECC4(int a1)
{
  int *v2; // r1
  float v3; // r1
  float v4; // r2
  float v6[6]; // [sp+8h] [bp-18h] BYREF

  v2 = sub_601DB42C();
  if ( *v2 != -1 || (v2 = sub_601DB46C(), *v2 != -1) )
    sub_601ECA7C((_DWORD *)a1, v2);
  FIELD_F32(a1, 328) = FIELD_F32(a1, 328) + 80.0;
  FIELD_U32(a1, 128) = 1075000115;
  FIELD_U32(a1, 132) = 1075000115;
  FIELD_U32(a1, 136) = 1075000115;
  v3 = FIELD_F32(a1, 84);
  v4 = FIELD_F32(a1, 88);
  v6[0] = FIELD_F32(a1, 80);
  v6[2] = v4;
  v6[0] = v6[0] + 120.0;
  v6[1] = v3 + 100.0;
  ((void (__fastcall *)(int, float *, _DWORD, _DWORD, float, float, float, _DWORD, int *))loc_60185F9C)(
    a1,
    v6,
    0,
    word_60BD70BC,
    unk_60BD70B8,
    unk_60BD70C0 * 2.3,
    unk_60BD70C4 * 2.3,
    word_60BD70BE,
    &dword_60B3B974);
  sub_601ECD14(a1, 1);
  FIELD_U32(a1, 376) = 32;
  return 32;
}
