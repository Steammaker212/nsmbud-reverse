/* sub_608CE608
 * address: 0x608CE608   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_608CE608()
{
  int result; // r0

  result = sub_608D9E04();
  *(_DWORD *)result = off_60C5B540;
  FIELD_U32(result, 32) = 0;
  FIELD_U32(result, 36) = 1060320051;
  FIELD_U32(result, 44) = 0;
  FIELD_U32(result, 40) = 15000000;
  FIELD_U32(result, 48) = 0;
  FIELD_U32(result, 52) = 1060320051;
  FIELD_U32(result, 60) = 0;
  FIELD_U32(result, 56) = 1500000000;
  FIELD_U32(result, 64) = 1061997773;
  FIELD_U32(result, 68) = 1060320051;
  FIELD_U32(result, 72) = 1045220557;
  FIELD_U32(result, 76) = 1065353216;
  strcpy((char *)(result + 80), "333?");
  FIELD_U32(result, 92) = 0;
  FIELD_U32(result, 88) = 0;
  FIELD_U32(result, 100) = 2;
  FIELD_U32(result, 104) = 0;
  FIELD_U32(result, 108) = 1;
  FIELD_U32(result, 112) = 2;
  FIELD_U32(result, 116) = 3;
  FIELD_U32(result, 120) = 4;
  FIELD_U32(result, 124) = 5;
  return result;
}
