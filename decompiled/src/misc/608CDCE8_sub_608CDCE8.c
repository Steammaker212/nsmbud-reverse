/* sub_608CDCE8
 * address: 0x608CDCE8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CDCE8(int a1)
{
  int result; // r0
  int AuxSampleCount; // r6
  int AuxSendBuffer; // r6
  _DWORD v5[10]; // [sp+0h] [bp-28h] BYREF

  result = FIELD_U8(a1, 32);
  if ( result )
  {
    AuxSampleCount = nn__audio__GetAuxSampleCount(a1 + 12);
    v5[0] = AuxSampleCount / (FIELD_U32(a1, 28) * FIELD_U32(a1, 24));
    v5[1] = nn__audio__GetAuxSampleRate(a1 + 12);
    v5[2] = FIELD_U32(a1, 24);
    v5[3] = FIELD_U32(a1, 28);
    v5[5] = *((_DWORD *)sub_608065A0() + 32);
    AuxSendBuffer = nn__audio__ReadAuxSendBuffer(a1 + 12, FIELD_U32(a1, 44), AuxSampleCount);
    v5[4] = AuxSendBuffer;
    (*(void (__fastcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)a1 + 20))(a1, FIELD_U32(a1, 44), v5);
    return nn__audio__WriteAuxReturnBuffer(a1 + 12, FIELD_U32(a1, 44), AuxSendBuffer);
  }
  return result;
}
