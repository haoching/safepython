#ifndef Py_RASP_H
#define Py_RASP_H

#ifdef __cplusplus
extern "C" {
#endif

const long long int PyRASP_GetEvalCounter(void);

const long long int PyRASP_IncEvalCounter(void);

const long long int PyRASP_DecEvalCounter(void);

#ifdef __cplusplus
}
#endif
#endif /* !Py_RASP_H */
