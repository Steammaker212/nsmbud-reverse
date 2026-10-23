/* sub_601E29E0
 * address: 0x601E29E0   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601E29E0(_DWORD *a1)
{
  int v2; // r5
  _DWORD *v3; // r4
  MovingSoundActor *v4; // r0
  MovingSoundActor *v5; // r0
  MovingSoundActor *v6; // r0
  MovingSoundActor *v7; // r0
  MovingSoundActor *v8; // r0
  MovingSoundActor *v9; // r0
  MovingSoundActor *v10; // r0
  MovingSoundActor *v11; // r0
  MovingSoundActor *v12; // r0
  MovingSoundActor *v13; // r0
  MovingSoundActor *v14; // r0
  MovingSoundActor *v15; // r0
  MovingSoundActor *v16; // r0
  MovingSoundActor *v17; // r0
  MovingSoundActor *v18; // r0
  MovingSoundActor *v19; // r0
  MovingSoundActor *v20; // r0
  MovingSoundActor *v21; // r0
  MovingSoundActor *v22; // r0
  MovingSoundActor *v23; // r0
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  _DWORD *result; // r0

  v2 = 0;
  do
  {
    v3 = &a1[v2];
    v2 += 12;
    v3[13] = 238;
    v3[14] = 0;
    v3[15] = 0;
    v3[16] = 0;
    v3[22] = 0;
    v3[17] = 0;
    v3[18] = 0;
    v3[19] = 0;
    v3[20] = 0;
    v3[21] = 1;
    *((_BYTE *)v3 + 96) = 0;
  }
  while ( v2 != 360 );
  v4 = (MovingSoundActor *)operator_new(0x140u);
  v5 = MovingSoundActor_ctor(v4, 0, 1);
  *(_DWORD *)v5[1]._._.nn_atk_SoundActor_data = 16;
  *(_DWORD *)&v5[1]._._.nn_atk_SoundActor_data[4] = 10;
  v5[1]._._.nn_atk_SoundActor_data[8] = 0;
  v5[1]._._.nn_atk_SoundActor_data[9] = 1;
  *(_DWORD *)FIELD_U32(v5, 0x0)._.nn_atk_SoundActor_data = off_60BD6C84;
  a1[4] = v5;
  *(_DWORD *)v5[1]._._.nn_atk_SoundActor_data = 0;
  v6 = (MovingSoundActor *)operator_new(0x140u);
  v7 = MovingSoundActor_ctor(v6, 0, 1);
  *(_DWORD *)v7[1]._._.nn_atk_SoundActor_data = 16;
  *(_DWORD *)&v7[1]._._.nn_atk_SoundActor_data[4] = 10;
  v7[1]._._.nn_atk_SoundActor_data[8] = 0;
  v7[1]._._.nn_atk_SoundActor_data[9] = 1;
  *(_DWORD *)FIELD_U32(v7, 0x0)._.nn_atk_SoundActor_data = off_60BD6C84;
  a1[5] = v7;
  *(_DWORD *)v7[1]._._.nn_atk_SoundActor_data = 1;
  v8 = (MovingSoundActor *)operator_new(0x140u);
  v9 = MovingSoundActor_ctor(v8, 0, 1);
  *(_DWORD *)v9[1]._._.nn_atk_SoundActor_data = 16;
  *(_DWORD *)&v9[1]._._.nn_atk_SoundActor_data[4] = 10;
  v9[1]._._.nn_atk_SoundActor_data[8] = 0;
  v9[1]._._.nn_atk_SoundActor_data[9] = 1;
  *(_DWORD *)FIELD_U32(v9, 0x0)._.nn_atk_SoundActor_data = off_60BD6C84;
  a1[6] = v9;
  *(_DWORD *)v9[1]._._.nn_atk_SoundActor_data = 2;
  v10 = (MovingSoundActor *)operator_new(0x140u);
  v11 = MovingSoundActor_ctor(v10, 0, 1);
  *(_DWORD *)v11[1]._._.nn_atk_SoundActor_data = 16;
  *(_DWORD *)&v11[1]._._.nn_atk_SoundActor_data[4] = 10;
  v11[1]._._.nn_atk_SoundActor_data[8] = 0;
  v11[1]._._.nn_atk_SoundActor_data[9] = 1;
  *(_DWORD *)FIELD_U32(v11, 0x0)._.nn_atk_SoundActor_data = off_60BD6C84;
  a1[7] = v11;
  *(_DWORD *)v11[1]._._.nn_atk_SoundActor_data = 3;
  v12 = (MovingSoundActor *)operator_new(0x140u);
  v13 = MovingSoundActor_ctor(v12, 0, 1);
  *(_DWORD *)v13[1]._._.nn_atk_SoundActor_data = 16;
  *(_DWORD *)&v13[1]._._.nn_atk_SoundActor_data[4] = 10;
  v13[1]._._.nn_atk_SoundActor_data[8] = 0;
  v13[1]._._.nn_atk_SoundActor_data[9] = 1;
  *(_DWORD *)FIELD_U32(v13, 0x0)._.nn_atk_SoundActor_data = off_60BD6C84;
  a1[8] = v13;
  *(_DWORD *)v13[1]._._.nn_atk_SoundActor_data = 5;
  v14 = (MovingSoundActor *)operator_new(0x140u);
  v15 = MovingSoundActor_ctor(v14, 0, 1);
  *(_DWORD *)v15[1]._._.nn_atk_SoundActor_data = 16;
  *(_DWORD *)&v15[1]._._.nn_atk_SoundActor_data[4] = 10;
  v15[1]._._.nn_atk_SoundActor_data[8] = 0;
  v15[1]._._.nn_atk_SoundActor_data[9] = 1;
  *(_DWORD *)FIELD_U32(v15, 0x0)._.nn_atk_SoundActor_data = off_60BD6C84;
  a1[9] = v15;
  *(_DWORD *)v15[1]._._.nn_atk_SoundActor_data = 4;
  v16 = (MovingSoundActor *)operator_new(0x140u);
  v17 = MovingSoundActor_ctor(v16, 0, 1);
  *(_DWORD *)v17[1]._._.nn_atk_SoundActor_data = 16;
  *(_DWORD *)&v17[1]._._.nn_atk_SoundActor_data[4] = 10;
  v17[1]._._.nn_atk_SoundActor_data[8] = 0;
  v17[1]._._.nn_atk_SoundActor_data[9] = 1;
  *(_DWORD *)FIELD_U32(v17, 0x0)._.nn_atk_SoundActor_data = off_60BD6C84;
  a1[10] = v17;
  *(_DWORD *)v17[1]._._.nn_atk_SoundActor_data = 15;
  v18 = (MovingSoundActor *)operator_new(0x140u);
  v19 = MovingSoundActor_ctor(v18, 0, 1);
  *(_DWORD *)v19[1]._._.nn_atk_SoundActor_data = 16;
  *(_DWORD *)&v19[1]._._.nn_atk_SoundActor_data[4] = 10;
  v19[1]._._.nn_atk_SoundActor_data[8] = 0;
  v19[1]._._.nn_atk_SoundActor_data[9] = 1;
  *(_DWORD *)FIELD_U32(v19, 0x0)._.nn_atk_SoundActor_data = off_60BD6C84;
  a1[11] = v19;
  *(_DWORD *)v19[1]._._.nn_atk_SoundActor_data = 15;
  v20 = (MovingSoundActor *)operator_new(0x140u);
  v21 = MovingSoundActor_ctor(v20, 0, 1);
  *(_DWORD *)v21[1]._._.nn_atk_SoundActor_data = 16;
  *(_DWORD *)&v21[1]._._.nn_atk_SoundActor_data[4] = 10;
  v21[1]._._.nn_atk_SoundActor_data[8] = 0;
  v21[1]._._.nn_atk_SoundActor_data[9] = 1;
  *(_DWORD *)FIELD_U32(v21, 0x0)._.nn_atk_SoundActor_data = off_60BD6C84;
  a1[12] = v21;
  *(_DWORD *)v21[1]._._.nn_atk_SoundActor_data = 0;
  v22 = (MovingSoundActor *)operator_new(0x134u);
  v23 = MovingSoundActor_ctor(v22, 0, 1);
  *(_DWORD *)FIELD_U32(v23, 0x0)._.nn_atk_SoundActor_data = off_60BD6CCC;
  a1[1] = v23;
  v24 = (_DWORD *)operator_new(0x1A4u);
  v25 = BasicSoundActor_ctor(v24, 1);
  *v25 = off_60BD6D14;
  a1[2] = v25;
  v26 = (_DWORD *)operator_new(0x1A4u);
  result = BasicSoundActor_ctor(v26, 1);
  *result = off_60BD6D48;
  a1[3] = result;
  return result;
}
