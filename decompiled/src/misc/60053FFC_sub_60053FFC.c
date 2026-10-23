/* sub_60053FFC
 * address: 0x60053FFC   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60053FFC(int a1)
{
  int v2; // r1
  unsigned __int8 v3; // r1
  _BYTE *result; // r0
  ActorBuildInfo v5; // [sp+0h] [bp-40h] BYREF

  v2 = FIELD_U32(a1, 20) & 7;
  FIELD_U32(a1, 6124) = v2;
  switch ( v2 )
  {
    case 0:
      v3 = 1;
      break;
    case 1:
      v3 = 2;
      break;
    case 2:
      v3 = 3;
      break;
    case 3:
      v3 = 4;
      break;
    case 4:
      v3 = 5;
      break;
    case 5:
      v3 = 6;
      break;
    default:
      v3 = 0;
      break;
  }
  if ( FIELD_U8(dword_60C99DD4, 849) == v3 )
    FIELD_U8(a1, 6121) = 1;
  memset(&v5, 0, sizeof(v5));
  v5.profile = Profile__get(0x2D1u);
  result = ActorMgr__create((void *)ActorMgr__instance, &v5, 0);
  if ( result )
  {
    result = *((_BYTE **)result + 2);
    FIELD_U32(a1, 6128) = result;
  }
  return result;
}
