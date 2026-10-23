/* nn__atk__SoundActor__ctor
 * address: 0x608A95F8   size: 208   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall nn__atk__SoundActor__ctor(_DWORD *a1, int a2)
{
  _DWORD *v4; // r6

  v4 = a1 + 2;
  *a1 =&nn__atk__SoundActor__vtable;
  a1[1] = 0;
  nn__atk__detail__ExternalSoundPlayer__ctor(a1 + 2);
  nn__atk__detail__ExternalSoundPlayer__ctor(a1 + 6);
  nn__atk__detail__ExternalSoundPlayer__ctor(a1 + 10);
  nn__atk__detail__ExternalSoundPlayer__ctor(a1 + 14);
  a1[22] = 1065353216;
  a1[23] = 1065353216;
  a1[24] = 1065353216;
  a1[25] = 0;
  a1[26] = 0;
  a1[27] = -1;
  a1[28] = 0;
  *((_BYTE *)a1 + 116) = 0;
  *((_BYTE *)a1 + 117) = 1;
  a1[1] = a2;
  a1[18] = v4;
  nn__atk__detail__ExternalSoundPlayer__SetPlayableSoundCount(v4, 0x7FFFFFFF);
  a1[19] = a1 + 6;
  nn__atk__detail__ExternalSoundPlayer__SetPlayableSoundCount(a1 + 6, 1);
  a1[20] = a1 + 10;
  nn__atk__detail__ExternalSoundPlayer__SetPlayableSoundCount(a1 + 10, 1);
  a1[21] = a1 + 14;
  nn__atk__detail__ExternalSoundPlayer__SetPlayableSoundCount(a1 + 14, 1);
  *((_WORD *)a1 + 58) = 1;
  return a1;
}
