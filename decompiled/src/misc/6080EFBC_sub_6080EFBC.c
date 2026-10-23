/* sub_6080EFBC
 * address: 0x6080EFBC   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6080EFBC(int a1)
{
  int v2; // r1
  int v3; // r1

  ((void (__fastcall *)(_DWORD, _DWORD))loc_608CEC18)(FIELD_U32(a1, 36), FIELD_U32(a1, 744));
  ((void (__fastcall *)(_DWORD, float))loc_608CEC78)(FIELD_U32(a1, 36), FIELD_F32(a1, 748));
  sub_608CECD4(FIELD_U32(a1, 36), v2, FIELD_U32(a1, 752), FIELD_U32(a1, 756));
  ((void (__fastcall *)(_DWORD, _DWORD))loc_608CED68)(FIELD_U32(a1, 36), FIELD_U32(a1, 760));
  ((void (__fastcall *)(_DWORD, float))loc_608CEDC8)(FIELD_U32(a1, 36), FIELD_F32(a1, 764));
  sub_608CEE24(FIELD_U32(a1, 36), v3, FIELD_U32(a1, 768), FIELD_U32(a1, 772));
  ((void (__fastcall *)(_DWORD, float))loc_608CEEC8)(FIELD_U32(a1, 36), FIELD_F32(a1, 776));
  ((void (__fastcall *)(_DWORD, float))loc_608CEF24)(FIELD_U32(a1, 36), FIELD_F32(a1, 780));
  ((void (__fastcall *)(_DWORD, float))loc_608CEF80)(FIELD_U32(a1, 36), FIELD_F32(a1, 784));
  ((void (__fastcall *)(_DWORD, float))loc_608CEFDC)(FIELD_U32(a1, 36), FIELD_F32(a1, 788));
  JUMPOUT(0x608CF038);
}
