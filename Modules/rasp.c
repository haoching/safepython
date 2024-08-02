

static long long int PyEvalCounter = 0;

const long long int PyRASP_GetEvalCounter(void)
{
    return PyEvalCounter;
}

const long long int PyRASP_IncEvalCounter(void)
{
    if (PyEvalCounter >= 1000)
        return -1;
    else
        return ++PyEvalCounter;
}

const long long int PyRASP_DecEvalCounter(void)
{
    if (PyEvalCounter <= 0)
        return -1;
    else
        return --PyEvalCounter;
}
